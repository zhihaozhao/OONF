
/*
 * The olsr.org Optimized Link-State Routing daemon version 2 (olsrd2)
 * Copyright (c) 2004-2015, the olsr.org team - see HISTORY file
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of olsr.org, olsrd nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Visit http://www.olsr.org for more information.
 *
 * If you find this software useful feel free to make a donation
 * to the project. For more information see the website or contact
 * the copyright holders.
 *
 */

#ifndef RFC5444_IANA_H_
#define RFC5444_IANA_H_

#include "common/common_types.h"
#include "common/netaddr.h"

/*
 * IANA registered IP/UDP-port number
 * and multicast groups for MANET (RFC 5498)
 */

enum rfc5444_iana {
  RFC5444_MANET_IPPROTO  = 138,
  RFC5444_MANET_UDP_PORT = 269,
};

/*
 * text variants of the constants above for defaults in
 * configuration sections
 */
#define RFC5444_MANET_IPPROTO_TXT      "138"
#define RFC5444_MANET_UDP_PORT_TXT     "269"
#define RFC5444_MANET_MULTICAST_V4_TXT "224.0.0.109"
#define RFC5444_MANET_MULTICAST_V6_TXT "ff02::6d"

/*
 * this is a list of all globally defined IANA
 * message types
 */

enum rfc5444_msgtype_iana {
  /* RFC 6130 (NHDP) */
  RFC5444_MSGTYPE_HELLO = 0,

  /* OLSRv2 draft 19 */
  RFC5444_MSGTYPE_TC = 1,
};

/*
 * this is a list of all globally defined IANA
 * packet TLVs and their allocated values
 */

enum rfc7182_pkttlvs_iana {
  /* RFC 7182 (rfc5444-sec) */
  RFC7182_PKTTLV_ICV       = 5,
  RFC7182_PKTTLV_TIMESTAMP = 6,
};

/*
 * this is a list of all globally defined IANA
 * message TLVs and their allocated values
 */

enum rfc5497_msgtlvs_iana {
  /* RFC 5497 (timetlv) */
  RFC5497_MSGTLV_INTERVAL_TIME  = 0,
  RFC5497_MSGTLV_VALIDITY_TIME  = 1,
};

enum rfc7182_msgtlvs_iana {
  /* RFC 7182 (rfc5444-sec) */
  RFC7182_MSGTLV_ICV            = 5,
  RFC7182_MSGTLV_TIMESTAMP      = 6,
};

enum rfc7181_msgtlvs_iana {
  /* RFC 7181 (OLSRv2) */
  RFC7181_MSGTLV_MPR_WILLING    = 7,
  RFC7181_MSGTLV_CONT_SEQ_NUM   = 8,
};

enum draft_olsrv2_mt_iana {
  DRAFT_MT_MSGTLV_MPR_TYPES     = RFC7181_MSGTLV_MPR_WILLING,
  DRAFT_MT_MSGTLV_MPR_TYPES_EXT = 1,
};

enum draft_olsrv2_ssr_iana {
  DRAFT_SSR_MSGTLV_CAPABILITY     = RFC7181_MSGTLV_MPR_WILLING,
  DRAFT_SSR_MSGTLV_CAPABILITY_EXT = 2,
};

/* values for MPR_WILLING message TLV */
#define RFC7181_WILLINGNESS_DEFAULT_STRING  "7"

enum rfc7181_willingness_values {
  RFC7181_WILLINGNESS_UNDEFINED = -1,
  RFC7181_WILLINGNESS_MIN       = 0,
  RFC7181_WILLINGNESS_NEVER     = 0,
  RFC7181_WILLINGNESS_DEFAULT   = 7,
  RFC7181_WILLINGNESS_ALWAYS    = 15,
  RFC7181_WILLINGNESS_MAX       = 15,

  RFC7181_WILLINGNESS_MASK      = 0xf,
  RFC7181_WILLINGNESS_SHIFT     = 4,
};

/* extension types of CONT_SEQ_NUM TLV */
enum rfc7181_cont_seq_num_ext {
  RFC7181_CONT_SEQ_NUM_COMPLETE   = 0,
  RFC7181_CONT_SEQ_NUM_INCOMPLETE = 1,
  RFC7181_CONT_SEQ_NUM_BITMASK    = 1,
};

enum draft_mt_mpr_types {
  DRAFT_MT_MPR_TYPES_MAX_TOPOLOGIES = 8,
};

/*
 * this is a list of all globally defined IANA
 * address TLVs and their allocated values
 */

enum rfc5497_addrtlv_iana {
  /* RFC 5497 (timetlv) */
  RFC5497_ADDRTLV_INTERVAL_TIME = 0,
  RFC5497_ADDRTLV_VALIDITY_TIME = 1,
};

enum rfc6130_addrtlv_iana {
  /* RFC 6130 (NHDP) */
  RFC6130_ADDRTLV_LOCAL_IF      = 2,
  RFC6130_ADDRTLV_LINK_STATUS   = 3,
  RFC6130_ADDRTLV_OTHER_NEIGHB  = 4,
};

enum rfc7182_addrtlv_iana {
  /* RFC 7182 (rfc5444-sec) */
  RFC7182_ADDRTLV_ICV           = 5,
  RFC7182_ADDRTLV_TIMESTAMP     = 6,
};

enum rfc7181_addrtlv_iana {
  /* RFC 7181 (OLSRv2) */
  RFC7181_ADDRTLV_LINK_METRIC   = 7,
  RFC7181_ADDRTLV_MPR           = 8,
  RFC7181_ADDRTLV_NBR_ADDR_TYPE = 9,
  RFC7181_ADDRTLV_GATEWAY       = 10,
};

enum rfc7181_gateway_ext {
  /* RFC7181 (OLSRv2) */
  RFC7181_DSTSPEC_GATEWAY       = 0,

  /* custom additions */
  RFC7181_SRCSPEC_GATEWAY       = 1,
  RFC7181_SRCSPEC_DEF_GATEWAY   = 2,
};

enum custom_srcspec_gateways {
  SRCSPEC_GW_ADDRTLV_SRC_PREFIX = 224,
};

/* values for LOCAL_IF address TLV */
enum rfc6130_localif_values {
  RFC6130_LOCALIF_THIS_IF       = 0,
  RFC6130_LOCALIF_OTHER_IF      = 1,
  RFC6130_LOCALIF_BITMASK       = 1,
};

/* values for LINK_STATUS address TLV */
enum rfc6130_linkstatus_values {
  RFC6130_LINKSTATUS_LOST       = 0,
  RFC6130_LINKSTATUS_SYMMETRIC  = 1,
  RFC6130_LINKSTATUS_HEARD      = 2,
  RFC6130_LINKSTATUS_BITMASK    = 3,
};

/* values for OTHER_NEIGHB address TLV */
enum rfc6130_otherneigh_bitmask {
  RFC6130_OTHERNEIGHB_SYMMETRIC = 1,
};

/* values for LINK_METRIC address TLV */
enum rfc7181_linkmetric_flags {
  RFC7181_LINKMETRIC_INCOMING_LINK  = 1<<7,
  RFC7181_LINKMETRIC_OUTGOING_LINK  = 1<<6,
  RFC7181_LINKMETRIC_INCOMING_NEIGH = 1<<5,
  RFC7181_LINKMETRIC_OUTGOING_NEIGH = 1<<4,
};

/* bitmasks for MPR address TLV */
enum rfc7181_mpr_bitmask {
  RFC7181_MPR_FLOODING    = 1<<0,
  RFC7181_MPR_ROUTING     = 1<<1,
};

/* values for NBR_ADDR_TYPE address TLV */
enum rfc7181_nbr_addr_bitmask {
  RFC7181_NBR_ADDR_TYPE_ORIGINATOR    = 1,
  RFC7181_NBR_ADDR_TYPE_ROUTABLE      = 2,
};

/* this is a list of extension types and values for RFC7182 signature TLVs */
enum rfc7182_icv_ext {
  RFC7182_ICV_EXT_GENERIC           = 0,
  RFC7182_ICV_EXT_CRYPTHASH         = 1,
  RFC7182_ICV_EXT_SRCSPEC_CRYPTHASH = 2,
};

enum rfc7182_icv_hash {
  RFC7182_ICV_HASH_UNKNOWN  = -1,

  RFC7182_ICV_HASH_IDENTITY = 0,
  RFC7182_ICV_HASH_SHA_1    = 1,
  RFC7182_ICV_HASH_SHA_224  = 2,
  RFC7182_ICV_HASH_SHA_256  = 3,
  RFC7182_ICV_HASH_SHA_384  = 4,
  RFC7182_ICV_HASH_SHA_512  = 5,

  RFC7182_ICV_HASH_COUNT,
};

enum rfc7182_icv_crypt {
  RFC7182_ICV_CRYPT_UNKNOWN  = -1,

  RFC7182_ICV_CRYPT_IDENTITY = 0,
  RFC7182_ICV_CRYPT_RSA      = 1,
  RFC7182_ICV_CRYPT_DSA      = 2,
  RFC7182_ICV_CRYPT_HMAC     = 3,
  RFC7182_ICV_CRYPT_3DES     = 4,
  RFC7182_ICV_CRYPT_AES      = 5,
  RFC7182_ICV_CRYPT_ECDSA    = 6,

  RFC7182_ICV_CRYPT_COUNT,
};

/* this is a list of extension types for RFC7182 timestamp TLVs */
enum rfc7182_timestamp_ext {
  RFC7182_TIMESTAMP_EXT_MONOTONIC = 0,
  RFC7182_TIMESTAMP_EXT_UNIX      = 1,
  RFC7182_TIMESTAMP_EXT_NTP       = 2,
  RFC7182_TIMESTAMP_EXT_RANDOM    = 3,
};


EXPORT const char *rfc7182_get_hash_name(enum rfc7182_icv_hash);
EXPORT const char *rfc7182_get_crypt_name(enum rfc7182_icv_crypt);

EXPORT const char **rfc7182_get_hashes(void);
EXPORT const char **rfc7182_get_crypto(void);

EXPORT enum rfc7182_icv_hash rfc7182_get_hash_id(const char *name);
EXPORT enum rfc7182_icv_crypt rfc7182_get_crypt_id(const char *name);

#endif /* RFC5444_IANA_H_ */
