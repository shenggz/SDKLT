/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from INTERNAL/fltg/xgs/ctr/CTR_L3.tbl.ltl
 * Edits to this file will be lost when it is regenerated.
 *
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
#include <bcmltd/bcmltd_internal.h>
#include "bcmltd_strpool.h"
static const bcmltd_field_rep_t bcmltd_ctr_l3_t_fields[] = {
    {
        .name  = bcmltd_strpool_port_id,  /* PORT_ID */
        .flags = BCMLTD_FIELD_F_KEY,
        .width = 8,
        .depth = 0,
        .desc = "Port Number",
    },
    {
        .name  = bcmltd_strpool_rx_ipv4_discard,  /* RX_IPV4_DISCARD */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv4 Discard Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv4_uc,  /* RX_IPV4_UC */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv4 Unicast Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv4_hdr_err,  /* RX_IPV4_HDR_ERR */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv4 IP Header Error Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv4_route_mc,  /* RX_IPV4_ROUTE_MC */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv4 Routed Multicast Packets.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv6_discard,  /* RX_IPV6_DISCARD */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv6 Discard Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv6_uc,  /* RX_IPV6_UC */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv6 Unicast Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv6_hdr_err,  /* RX_IPV6_HDR_ERR */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv6 IP Header Error Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_ipv6_route_mc,  /* RX_IPV6_ROUTE_MC */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive IPv6 Routed Multicast Packets.",
    },
    {
        .name  = bcmltd_strpool_rx_discard,  /* RX_DISCARD */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive Discard Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_uc,  /* RX_UC */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive Unicast Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_port_discard,  /* RX_PORT_DISCARD */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Incremented when spanning tree state\n is not in forwarding state.\n",
    },
    {
        .name  = bcmltd_strpool_rx_higig_unknown_pkt,  /* RX_HIGIG_UNKNOWN_PKT */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive Unknown HiGig Packet Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_higig_ctrl_pkt,  /* RX_HIGIG_CTRL_PKT */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive HiGig Packet with Control Opcode Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_higig_bc_pkt,  /* RX_HIGIG_BC_PKT */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive HiGig Packet with Broadcast Opcode Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_higig_l2mc_opcode_pkt,  /* RX_HIGIG_L2MC_OPCODE_PKT */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive HiGig Packet with L2MC Opcode Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_higig_ipmc_opcode_pkt,  /* RX_HIGIG_IPMC_OPCODE_PKT */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive HiGig Packet with IPMC Opcode Counter.",
    },
    {
        .name  = bcmltd_strpool_rx_higig_unknown_opcode_pkt,  /* RX_HIGIG_UNKNOWN_OPCODE_PKT */
        .flags = 0,
        .width = 64,
        .depth = 0,
        .desc = "Receive HiGig Packet with Unknown Opcode Counter.",
    },
};
const bcmltd_table_rep_t bcmltd_ctr_l3_t = {
    .name = bcmltd_strpool_ctr_l3, /* CTR_L3 */
    .flags = 0,
    .fields = 18,
    .field = bcmltd_ctr_l3_t_fields,
    .desc = "Logical Table for L3 Counters.\n",
};