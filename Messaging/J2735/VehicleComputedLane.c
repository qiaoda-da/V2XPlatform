/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S ../../../../tools/asn1c/skeletons -pdu=BasicSafetyMessage -fcompound-names`
 */

#include "VehicleComputedLane.h"

static asn_TYPE_member_t asn_MBR_VehicleComputedLane_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleComputedLane, laneNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"laneNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleComputedLane, laneWidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneWidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"laneWidth"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleComputedLane, laneAttributes),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleLaneAttributes,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"laneAttributes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleComputedLane, refLaneNum),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"refLaneNum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleComputedLane, lineOffset),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DrivenLineOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lineOffset"
		},
	{ ATF_POINTER, 2, offsetof(struct VehicleComputedLane, keepOutList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"keepOutList"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleComputedLane, connectsTo),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnectsTo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"connectsTo"
		},
};
static ber_tlv_tag_t asn_DEF_VehicleComputedLane_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VehicleComputedLane_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* laneNumber at 1987 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* laneWidth at 1988 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* laneAttributes at 1989 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* refLaneNum at 1991 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* lineOffset at 1993 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* keepOutList at 1994 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* connectsTo at 1996 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VehicleComputedLane_specs_1 = {
	sizeof(struct VehicleComputedLane),
	offsetof(struct VehicleComputedLane, _asn_ctx),
	asn_MAP_VehicleComputedLane_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VehicleComputedLane = {
	"VehicleComputedLane",
	"VehicleComputedLane",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VehicleComputedLane_tags_1,
	sizeof(asn_DEF_VehicleComputedLane_tags_1)
		/sizeof(asn_DEF_VehicleComputedLane_tags_1[0]), /* 1 */
	asn_DEF_VehicleComputedLane_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleComputedLane_tags_1)
		/sizeof(asn_DEF_VehicleComputedLane_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VehicleComputedLane_1,
	7,	/* Elements count */
	&asn_SPC_VehicleComputedLane_specs_1	/* Additional specs */
};
