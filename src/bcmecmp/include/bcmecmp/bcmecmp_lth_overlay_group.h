/*! \file bcmecmp_lth_overlay_group.h
 *
 * ECMP_OVERLAY logical table handler functions.
 */
/*
 * Copyright: (c) 2018 Broadcom. All Rights Reserved. "Broadcom" refers to 
 * Broadcom Limited and/or its subsidiaries.
 * 
 * Broadcom Switch Software License
 * 
 * This license governs the use of the accompanying Broadcom software. Your 
 * use of the software indicates your acceptance of the terms and conditions 
 * of this license. If you do not agree to the terms and conditions of this 
 * license, do not use the software.
 * 1. Definitions
 *    "Licensor" means any person or entity that distributes its Work.
 *    "Software" means the original work of authorship made available under 
 *    this license.
 *    "Work" means the Software and any additions to or derivative works of 
 *    the Software that are made available under this license.
 *    The terms "reproduce," "reproduction," "derivative works," and 
 *    "distribution" have the meaning as provided under U.S. copyright law.
 *    Works, including the Software, are "made available" under this license 
 *    by including in or with the Work either (a) a copyright notice 
 *    referencing the applicability of this license to the Work, or (b) a copy 
 *    of this license.
 * 2. Grant of Copyright License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    copyright license to reproduce, prepare derivative works of, publicly 
 *    display, publicly perform, sublicense and distribute its Work and any 
 *    resulting derivative works in any form.
 * 3. Grant of Patent License
 *    Subject to the terms and conditions of this license, each Licensor 
 *    grants to you a perpetual, worldwide, non-exclusive, and royalty-free 
 *    patent license to make, have made, use, offer to sell, sell, import, and 
 *    otherwise transfer its Work, in whole or in part. This patent license 
 *    applies only to the patent claims licensable by Licensor that would be 
 *    infringed by Licensor's Work (or portion thereof) individually and 
 *    excluding any combinations with any other materials or technology.
 *    If you institute patent litigation against any Licensor (including a 
 *    cross-claim or counterclaim in a lawsuit) to enforce any patents that 
 *    you allege are infringed by any Work, then your patent license from such 
 *    Licensor to the Work shall terminate as of the date such litigation is 
 *    filed.
 * 4. Redistribution
 *    You may reproduce or distribute the Work only if (a) you do so under 
 *    this License, (b) you include a complete copy of this License with your 
 *    distribution, and (c) you retain without modification any copyright, 
 *    patent, trademark, or attribution notices that are present in the Work.
 * 5. Derivative Works
 *    You may specify that additional or different terms apply to the use, 
 *    reproduction, and distribution of your derivative works of the Work 
 *    ("Your Terms") only if (a) Your Terms provide that the limitations of 
 *    Section 7 apply to your derivative works, and (b) you identify the 
 *    specific derivative works that are subject to Your Terms. 
 *    Notwithstanding Your Terms, this license (including the redistribution 
 *    requirements in Section 4) will continue to apply to the Work itself.
 * 6. Trademarks
 *    This license does not grant any rights to use any Licensor's or its 
 *    affiliates' names, logos, or trademarks, except as necessary to 
 *    reproduce the notices described in this license.
 * 7. Limitations
 *    Platform. The Work and any derivative works thereof may only be used, or 
 *    intended for use, with a Broadcom switch integrated circuit.
 *    No Reverse Engineering. You will not use the Work to disassemble, 
 *    reverse engineer, decompile, or attempt to ascertain the underlying 
 *    technology of a Broadcom switch integrated circuit.
 * 8. Termination
 *    If you violate any term of this license, then your rights under this 
 *    license (including the license grants of Sections 2 and 3) will 
 *    terminate immediately.
 * 9. Disclaimer of Warranty
 *    THE WORK IS PROVIDED "AS IS" WITHOUT WARRANTIES OR CONDITIONS OF ANY 
 *    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WARRANTIES OR CONDITIONS OF 
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE OR 
 *    NON-INFRINGEMENT. YOU BEAR THE RISK OF UNDERTAKING ANY ACTIVITIES UNDER 
 *    THIS LICENSE. SOME STATES' CONSUMER LAWS DO NOT ALLOW EXCLUSION OF AN 
 *    IMPLIED WARRANTY, SO THIS DISCLAIMER MAY NOT APPLY TO YOU.
 * 10. Limitation of Liability
 *    EXCEPT AS PROHIBITED BY APPLICABLE LAW, IN NO EVENT AND UNDER NO LEGAL 
 *    THEORY, WHETHER IN TORT (INCLUDING NEGLIGENCE), CONTRACT, OR OTHERWISE 
 *    SHALL ANY LICENSOR BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY DIRECT, 
 *    INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT OF 
 *    OR RELATED TO THIS LICENSE, THE USE OR INABILITY TO USE THE WORK 
 *    (INCLUDING BUT NOT LIMITED TO LOSS OF GOODWILL, BUSINESS INTERRUPTION, 
 *    LOST PROFITS OR DATA, COMPUTER FAILURE OR MALFUNCTION, OR ANY OTHER 
 *    COMMERCIAL DAMAGES OR LOSSES), EVEN IF THE LICENSOR HAS BEEN ADVISED OF 
 *    THE POSSIBILITY OF SUCH DAMAGES.
 */

#ifndef BCMECMP_LTH_OVERLAY_GROUP_H
#define BCMECMP_LTH_OVERLAY_GROUP_H

#include <bcmltd/bcmltd_handler.h>

/*!
 * \brief ECMP_OVERLAY logical table operation input parameters validation.
 *
 * Validates input logical field values based on logical table and the
 * operation type being performed.
 *
 * \param [in] unit Unit number.
 * \param [in] opcode Logical table operation code.
 * \param [in] in Input field values.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_PARAM Invalid input parameter.
 * \retval SHR_E_UNAVAIL Unsupported logical table for current ECMP_MODE.
 * \retval SHR_E_EXISTS A logical table entry already exists with this ECMP_ID.
 * \retval SHR_E_NOT_FOUND Entry not found.
 * \retval SHR_E_CONFIG Unsupported operation type specified in opcode.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_validate(int unit,
                                   bcmlt_opcode_t opcode,
                                   const bcmltd_fields_t *in,
                                   const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table entry insert.
 *
 * Inserts an entry into ECMP_OVERLAY logical table.
 *
 * \param [in] unit Unit number.
 * \param [in] trans_id Transaction identifier.
 * \param [in] in Input field values.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_PARAM Invalid input parameter.
 * \retval SHR_E_EXISTS A logical table entry already exists with this ECMP_ID.
 * \retval SHR_E_FULL No room to insert this group as all resources are in use.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_insert(int unit,
                                 uint32_t trans_id,
                                 const bcmltd_fields_t *in,
                                 const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table entry lookup.
 *
 * Lookup an entry in ECMP_OVERLAY logical table and
 * populate entry logical field values in logical table database out field
 * array.
 *
 * \param [in] unit Unit number.
 * \param [in] trans_id Transaction identifier.
 * \param [in] in Input field values.
 * \param [out] out Output field values.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_PARAM Invalid input parameter.
 * \retval SHR_E_NOT_FOUND Entry not found.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_lookup(int unit,
                                 uint32_t trans_id,
                                 const bcmltd_fields_t *in,
                                 bcmltd_fields_t *out,
                                 const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table entry delete.
 *
 * Delete an entry from ECMP_OVERLAY logical table.
 *
 * \param [in] unit Unit number.
 * \param [in] trans_id Transaction identifier.
 * \param [in] in Input field values.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_NOT_FOUND Entry not found.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_delete(int unit,
                                 uint32_t trans_id,
                                 const bcmltd_fields_t *in,
                                 const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table entry update.
 *
 * Update an existing entry in ECMP_OVERLAY logical table.
 *
 * \param [in] unit Unit number.
 * \param [in] trans_id Transaction identifier.
 * \param [in] in Input field values.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_NOT_FOUND Entry not found.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_update(int unit,
                                 uint32_t trans_id,
                                 const bcmltd_fields_t *in,
                                 const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table traverse function to get first entry.
 *
 * Traverses ECMP_OVERLAY logical table and returns key-field and data-field
 * values of the first entry found in this logical table.
 *
 * \param [in] unit Unit number.
 * \param [in] trans_id Transaction identifier.
 * \param [out] out LTD output field set.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_PARAM Invalid input parameter.
 * \retval SHR_E_NOT_FOUND No entries found in the searched logical table.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_first(int unit,
                                uint32_t trans_id,
                                bcmltd_fields_t *out,
                                const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table traverse function to get next entry.
 *
 * Traverses ECMP_OVERLAY logical table starting from the
 * specified ECMP_ID until the maximum ECMP_ID value supported by this logical
 * table, searching for the next valid entry inserted in this table.
 *
 * If an entry is found, this function returns the entry ECMP_ID key-field
 * value along with the data-field values. If no entry is found after the
 * given ECMP_ID, this function returns SHR_E_NOT_FOUND error.
 *
 * \param [in] unit Unit number.
 * \param [in] trans_id Transaction identifier.
 * \param [in] in LTD input field set.
 * \param [out] out LTD output field set.
 * \param [in] arg Transform arguments.
 *
 * \retval SHR_E_NONE Success.
 * \retval SHR_E_PARAM Invalid input parameter.
 * \retval SHR_E_NOT_FOUND No entries found after the given ECMP_ID.
 * \retval SHR_E_MEMORY Logcal table entry memory allocation failed.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmecmp_lth_overlay_group_next(int unit,
                               uint32_t trans_id,
                               const bcmltd_fields_t *in,
                               bcmltd_fields_t *out,
                               const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table transaction commit function.
 *
 * This function commits a transaction that was previously defined by a series
 * of insert/update/delete and lookup operations. A transaction may contain
 * multiple operations that were staged before.
 *
 * \param [in]  unit            Unit number.
 * \param [in]  trans_id        Transaction identifier.
 * \param [in]  arg             Handler arguments.
 *
 * \retval SHR_E_NONE  OK
 * \retval !SHR_E_NONE ERROR
 */
extern int
bcmecmp_lth_overlay_group_commit(int unit,
                                 uint32_t trans_id,
                                 const bcmltd_generic_arg_t *arg);

/*!
 * \brief ECMP_OVERLAY logical table transaction abort function.
 *
 * This function aborts a transaction that was previously staged via a series
 * of insert/update/delete and lookup operations. As a result, all the staging
 * will be cleaned up and actual logical table entry change will not take place. *
 * \param [in]  unit            Unit number.
 * \param [in]  trans_id        Transaction identifier.
 * \param [in]  arg             Handler arguments.
 *
 * \retval SHR_E_NONE  OK
 * \retval !SHR_E_NONE ERROR
 */
extern int
bcmecmp_lth_overlay_group_abort(int unit,
                                uint32_t trans_id,
                                const bcmltd_generic_arg_t *arg);

#endif /* BCMECMP_LTH_OVERLAY_GROUP_H */
