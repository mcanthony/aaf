//=---------------------------------------------------------------------=
//
// $Id$ $Name$
//
// The contents of this file are subject to the AAF SDK Public
// Source License Agreement (the "License"); You may not use this file
// except in compliance with the License.  The License is available in
// AAFSDKPSL.TXT, or you may obtain a copy of the License from the AAF
// Association or its successor.
//
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See
// the License for the specific language governing rights and limitations
// under the License.
//
// The Original Code of this file is Copyright 1998-2006, Licensor of the
// AAF Association.
//
// The Initial Developer of the Original Code of this file and the
// Licensor of the AAF Association is Avid Technology.
// All rights reserved.
//
//=---------------------------------------------------------------------=
// Derived from AAFResult.h
//
// Note: The following regular expression replace does most of the conversion work:
//
//       \#define {AAFRESULT_[A-Z0-9_]+} +{EQUIV_AAFHRESULT\(.*\)}
//		 \t\{ \2, \"\1\" \},
//
//=---------------------------------------------------------------------=

#define EQUIV_FACILITY_AAF 0x12
#define EQUIV_AAFHRESULT( code ) \
    ((HRESULT) (((aafUInt32)(SEVERITY_ERROR)<<31) | ((aafUInt32)(EQUIV_FACILITY_AAF)<<16) | ((aafUInt32)(code))) )

struct ResultCodes_t
{
	HRESULT hr;
	const char *Text;
};

const ResultCodes_t ResultCodes[] =
{
/* SESSION/FILE Error Codes */
	{ EQUIV_AAFHRESULT(0x0010), "AAFRESULT_BAD_SESSION" },
	{ EQUIV_AAFHRESULT(0x0011), "AAFRESULT_BADSESSIONOPEN" },
	{ EQUIV_AAFHRESULT(0x0012), "AAFRESULT_BADSESSIONMETA" },
	{ EQUIV_AAFHRESULT(0x0013), "AAFRESULT_BADSESSIONCLOSE" },
	{ EQUIV_AAFHRESULT(0x0014), "AAFRESULT_BADCONTAINER" },
	{ EQUIV_AAFHRESULT(0x0015), "AAFRESULT_FILEREV_NOT_SUPP" },
	{ EQUIV_AAFHRESULT(0x0016), "AAFRESULT_FILEREV_DIFF" },
	{ EQUIV_AAFHRESULT(0x0017), "AAFRESULT_BADOPEN" },
	{ EQUIV_AAFHRESULT(0x0018), "AAFRESULT_BADCLOSE" },
	{ EQUIV_AAFHRESULT(0x0019), "AAFRESULT_BAD_FHDL" },
	{ EQUIV_AAFHRESULT(0x001A), "AAFRESULT_BADHEAD" },
	{ EQUIV_AAFHRESULT(0x001B), "AAFRESULT_NOBYTEORDER" },
	{ EQUIV_AAFHRESULT(0x001C), "AAFRESULT_INVALID_BYTEORDER" },
	{ EQUIV_AAFHRESULT(0x001D), "AAFRESULT_NOT_AAF_FILE" },
	{ EQUIV_AAFHRESULT(0x001E), "AAFRESULT_WRONG_FILETYPE" },
	{ EQUIV_AAFHRESULT(0x001F), "AAFRESULT_WRONG_OPENMODE" },
	{ EQUIV_AAFHRESULT(0x0020), "AAFRESULT_CONTAINERWRITE" },
	{ EQUIV_AAFHRESULT(0x0021), "AAFRESULT_FILE_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0022), "AAFRESULT_CANNOT_SAVE_CLSD" },
	{ EQUIV_AAFHRESULT(0x0023), "AAFRESULT_CANNOT_LOAD_CLSD" },
	{ EQUIV_AAFHRESULT(0x0024), "AAFRESULT_FILE_REV_200" },
	{ EQUIV_AAFHRESULT(0x0025), "AAFRESULT_NEED_PRODUCT_IDENT" },
	{ EQUIV_AAFHRESULT(0x0026), "AAFRESULT_NOT_WRITEABLE" },
	{ EQUIV_AAFHRESULT(0x0027), "AAFRESULT_NOT_READABLE" },
	{ EQUIV_AAFHRESULT(0x0028), "AAFRESULT_FILE_EXISTS" },
	{ EQUIV_AAFHRESULT(0x0029), "AAFRESULT_NOT_OPEN" },
	{ EQUIV_AAFHRESULT(0x002A), "AAFRESULT_ALREADY_OPEN" },
	{ EQUIV_AAFHRESULT(0x002B), "AAFRESULT_BAD_FLAGS" },
	{ EQUIV_AAFHRESULT(0x002C), "AAFRESULT_BAD_FLAG_COMBINATION" },
	{ EQUIV_AAFHRESULT(0x002D), "AAFRESULT_UNSAVED_CHANGES" },
	{ EQUIV_AAFHRESULT(0x002E), "AAFRESULT_NOT_REVERTABLE" },
	{ EQUIV_AAFHRESULT(0x002F), "AAFRESULT_MEDIA_NOT_REVERTABLE" },
	{ EQUIV_AAFHRESULT(0x0030), "AAFRESULT_OPERATION_NOT_PERMITTED" },
	{ EQUIV_AAFHRESULT(0x0031), "AAFRESULT_READ_FAILURE" },
	{ EQUIV_AAFHRESULT(0x0032), "AAFRESULT_WRITE_FAILURE" },
	{ EQUIV_AAFHRESULT(0x0033), "AAFRESULT_SYNCHRONIZE_FAILURE" },
	{ EQUIV_AAFHRESULT(0x0034), "AAFRESULT_SET_EXTENT_FAILURE" },
	{ EQUIV_AAFHRESULT(0x0035), "AAFRESULT_NOT_CREATABLE" },
	{ EQUIV_AAFHRESULT(0x0036), "AAFRESULT_NOT_MODIFIABLE" },
	{ EQUIV_AAFHRESULT(0x0037), "AAFRESULT_GETSIZE_FAILURE" },
	{ EQUIV_AAFHRESULT(0x0038), "AAFRESULT_GETEXTENT_FAILURE" },
	{ EQUIV_AAFHRESULT(0x0039), "AAFRESULT_SETEXTENT_FAILURE" },
	{ EQUIV_AAFHRESULT(0x003A), "AAFRESULT_FILE_BEING_MODIFIED" },

/* MEDIA Error Codes */
	{ EQUIV_AAFHRESULT(0x0064), "AAFRESULT_DESCSAMPRATE" },
	{ EQUIV_AAFHRESULT(0x0065), "AAFRESULT_SOURCEMOBLIST" },
	{ EQUIV_AAFHRESULT(0x0066), "AAFRESULT_DESCLENGTH" },
	{ EQUIV_AAFHRESULT(0x0067), "AAFRESULT_INTERNAL_MDO" },
	{ EQUIV_AAFHRESULT(0x0068), "AAFRESULT_3COMPONENT" },
	{ EQUIV_AAFHRESULT(0x0069), "AAFRESULT_INVALID_PARM_SIZE" },
	{ EQUIV_AAFHRESULT(0x006A), "AAFRESULT_BADSAMPLEOFFSET" },
	{ EQUIV_AAFHRESULT(0x006B), "AAFRESULT_ONESAMPLEREAD" },
	{ EQUIV_AAFHRESULT(0x006C), "AAFRESULT_ONESAMPLEWRITE" },
	{ EQUIV_AAFHRESULT(0x006D), "AAFRESULT_DECOMPRESS" },
	{ EQUIV_AAFHRESULT(0x006E), "AAFRESULT_NODATA" },
	{ EQUIV_AAFHRESULT(0x006F), "AAFRESULT_SMALLBUF" },
	{ EQUIV_AAFHRESULT(0x0070), "AAFRESULT_BADCOMPR" },
	{ EQUIV_AAFHRESULT(0x0071), "AAFRESULT_BADPIXFORM" },
	{ EQUIV_AAFHRESULT(0x0072), "AAFRESULT_BADLAYOUT" },
	{ EQUIV_AAFHRESULT(0x0073), "AAFRESULT_COMPRLINESWR" },
	{ EQUIV_AAFHRESULT(0x0074), "AAFRESULT_COMPRLINESRD" },
	{ EQUIV_AAFHRESULT(0x0075), "AAFRESULT_BADMEDIATYPE" },
	{ EQUIV_AAFHRESULT(0x0076), "AAFRESULT_BADDATAADDRESS" },
	{ EQUIV_AAFHRESULT(0x0077), "AAFRESULT_BAD_MDHDL" },
	{ EQUIV_AAFHRESULT(0x0078), "AAFRESULT_MEDIA_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0079), "AAFRESULT_ILLEGAL_MEMFMT" },
	{ EQUIV_AAFHRESULT(0x007A), "AAFRESULT_ILLEGAL_FILEFMT" },
	{ EQUIV_AAFHRESULT(0x007B), "AAFRESULT_SWABBUFSIZE" },
	{ EQUIV_AAFHRESULT(0x007C), "AAFRESULT_MISSING_SWAP_PROC" },
	{ EQUIV_AAFHRESULT(0x007D), "AAFRESULT_NULL_STREAMPROC" },
	{ EQUIV_AAFHRESULT(0x007E), "AAFRESULT_NULLBUF" },
	{ EQUIV_AAFHRESULT(0x007F), "AAFRESULT_SWAP_SETUP" },
	{ EQUIV_AAFHRESULT(0x0080), "AAFRESULT_INVALID_FILE_MOB" },
	{ EQUIV_AAFHRESULT(0x0081), "AAFRESULT_SINGLE_CHANNEL_OP" },
	{ EQUIV_AAFHRESULT(0x0082), "AAFRESULT_INVALID_CACHE_SIZE" },
	{ EQUIV_AAFHRESULT(0x0083), "AAFRESULT_NOT_FILEMOB" },
	{ EQUIV_AAFHRESULT(0x0084), "AAFRESULT_TRANSLATE_SAMPLE_SIZE" },
	{ EQUIV_AAFHRESULT(0x0085), "AAFRESULT_TRANSLATE_NON_INTEGRAL_RATE" },
	{ EQUIV_AAFHRESULT(0x0086), "AAFRESULT_MISSING_MEDIA_REP" },
	{ EQUIV_AAFHRESULT(0x0087), "AAFRESULT_NOT_LONGWORD" },
	{ EQUIV_AAFHRESULT(0x0088), "AAFRESULT_XFER_DUPCH" },
	{ EQUIV_AAFHRESULT(0x0089), "AAFRESULT_MEDIA_NOT_INIT" },
	{ EQUIV_AAFHRESULT(0x008A), "AAFRESULT_BLOCKING_SIZE" },
	{ EQUIV_AAFHRESULT(0x008B), "AAFRESULT_WRONG_MEDIATYPE" },
	{ EQUIV_AAFHRESULT(0x008C), "AAFRESULT_MULTI_WRITELEN" },
	{ EQUIV_AAFHRESULT(0x008D), "AAFRESULT_STREAM_REOPEN" },
	{ EQUIV_AAFHRESULT(0x008E), "AAFRESULT_TOO_MANY_FMT_OPS" },
	{ EQUIV_AAFHRESULT(0x008F), "AAFRESULT_MEDIASTREAM_NOTALLOWED" },
	{ EQUIV_AAFHRESULT(0x0090), "AAFRESULT_STILLFRAME_BADLENGTH" },
	{ EQUIV_AAFHRESULT(0x0091), "AAFRESULT_DATA_NONCONTIG" },
	{ EQUIV_AAFHRESULT(0x0092), "AAFRESULT_OPLIST_OVERFLOW" },
	{ EQUIV_AAFHRESULT(0x0093), "AAFRESULT_STREAM_CLOSED" },
	{ EQUIV_AAFHRESULT(0x0094), "AAF_RESULT_USE_MULTI_CREATE" },
	{ EQUIV_AAFHRESULT(0x0095), "AAFRESULT_MEDIA_OPENMODE" },
	{ EQUIV_AAFHRESULT(0x0096), "AAFRESULT_MEDIA_CANNOT_CLOSE" },
	{ EQUIV_AAFHRESULT(0x0097), "AAFRESULT_CODEC_INVALID" },
	{ EQUIV_AAFHRESULT(0x0098), "AAFRESULT_INVALID_OP_CODEC" },
	{ EQUIV_AAFHRESULT(0x0099), "AAFRESULT_BAD_CODEC_REV" },
	{ EQUIV_AAFHRESULT(0x009A), "AAFRESULT_CODEC_CHANNELS" },
	{ EQUIV_AAFHRESULT(0x009B), "AAFRESULT_INTERN_TOO_SMALL" },
	{ EQUIV_AAFHRESULT(0x009C), "AAFRESULT_INTERNAL_UNKNOWN_LOC" },
	{ EQUIV_AAFHRESULT(0x009D), "AAFRESULT_TRANSLATE" },
	{ EQUIV_AAFHRESULT(0x009E), "AAFRESULT_EOF" },
	{ EQUIV_AAFHRESULT(0x009F), "AAFRESULT_TIFFVERSION" },
	{ EQUIV_AAFHRESULT(0x00A0), "AAFRESULT_BADTIFFCOUNT" },
	{ EQUIV_AAFHRESULT(0x00A1), "AAFRESULT_24BITVIDEO" },
	{ EQUIV_AAFHRESULT(0x00A2), "AAFRESULT_JPEGBASELINE" },
	{ EQUIV_AAFHRESULT(0x00A3), "AAFRESULT_BADJPEGINFO" },
	{ EQUIV_AAFHRESULT(0x00A4), "AAFRESULT_BADQTABLE" },
	{ EQUIV_AAFHRESULT(0x00A5), "AAFRESULT_BADACTABLE" },
	{ EQUIV_AAFHRESULT(0x00A6), "AAFRESULT_BADDCTABLE" },
	{ EQUIV_AAFHRESULT(0x00A7), "AAFRESULT_NOFRAMEINDEX" },
	{ EQUIV_AAFHRESULT(0x00A8), "AAFRESULT_BADFRAMEOFFSET" },
	{ EQUIV_AAFHRESULT(0x00A9), "AAFRESULT_JPEGPCM" },
	{ EQUIV_AAFHRESULT(0x00AA), "AAFRESULT_JPEGDISABLED" },
	{ EQUIV_AAFHRESULT(0x00AB), "AAFRESULT_JPEGPROBLEM" },
	{ EQUIV_AAFHRESULT(0x00AC), "AAFRESULT_BADEXPORTPIXFORM" },
	{ EQUIV_AAFHRESULT(0x00AD), "AAFRESULT_BADEXPORTLAYOUT" },
	{ EQUIV_AAFHRESULT(0x00AE), "AAFRESULT_BADRWLINES" },
	{ EQUIV_AAFHRESULT(0x00AF), "AAFRESULT_BADAIFCDATA" },
	{ EQUIV_AAFHRESULT(0x00B0), "AAFRESULT_BADWAVEDATA" },
	{ EQUIV_AAFHRESULT(0x00B1), "AAFRESULT_NOAUDIOCONV" },
	{ EQUIV_AAFHRESULT(0x00B2), "AAFRESULT_XFER_NOT_BYTES" },
	{ EQUIV_AAFHRESULT(0x00B3), "AAFRESULT_CODEC_NAME_SIZE" },
	{ EQUIV_AAFHRESULT(0x00B4), "AAFRESULT_ZERO_SAMPLESIZE" },
	{ EQUIV_AAFHRESULT(0x00B5), "AAFRESULT_ZERO_PIXELSIZE" },
	{ EQUIV_AAFHRESULT(0x00B6), "AAFRESULT_BAD_VARIETY" },
	{ EQUIV_AAFHRESULT(0x00B7), "AAFRESULT_FORMAT_BOUNDS" },     
	{ EQUIV_AAFHRESULT(0x00B8), "AAFRESULT_FORMAT_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x00B9), "AAFRESULT_UNKNOWN_CONTAINER" },
	{ EQUIV_AAFHRESULT(0x00BA), "AAFRESULT_NO_MORE_FLAVOURS" },

/* OBJECT Error Codes */
	{ EQUIV_AAFHRESULT(0x00C8), "AAFRESULT_NULLOBJECT" },
	{ EQUIV_AAFHRESULT(0x00C9), "AAFRESULT_BADINDEX" },
	{ EQUIV_AAFHRESULT(0x00CA), "AAFRESULT_INVALID_LINKAGE" },
	{ EQUIV_AAFHRESULT(0x00CB), "AAFRESULT_BAD_PROP" },
	{ EQUIV_AAFHRESULT(0x00CC), "AAFRESULT_BAD_TYPE" },
	{ EQUIV_AAFHRESULT(0x00CD), "AAFRESULT_SWAB" },
	{ EQUIV_AAFHRESULT(0x00CE), "AAFRESULT_END_OF_DATA" },
	{ EQUIV_AAFHRESULT(0x00CF), "AAFRESULT_PROP_NOT_PRESENT" },
	{ EQUIV_AAFHRESULT(0x00D0), "AAFRESULT_INVALID_DATADEF" },
	{ EQUIV_AAFHRESULT(0x00D1), "AAFRESULT_DATADEF_EXIST" },
	{ EQUIV_AAFHRESULT(0x00D2), "AAFRESULT_TOO_MANY_TYPES" },
	{ EQUIV_AAFHRESULT(0x00D5), "AAFRESULT_BAD_TYPE_CATEGORY" },
	{ EQUIV_AAFHRESULT(0x00D6), "AAFRESULT_OBJECT_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x00D7), "AAFRESULT_IS_ROOT_CLASS" },
	{ EQUIV_AAFHRESULT(0x00D8), "AAFRESULT_TYPE_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x00D9), "AAFRESULT_PROPERTY_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x00DA), "AAFRESULT_CLASS_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x00DB), "AAFRESULT_PROPERTY_DUPLICATE" },
	{ EQUIV_AAFHRESULT(0x00DC), "AAFRESULT_ELEMENT_NOT_PRESENT" },
	{ EQUIV_AAFHRESULT(0x00DD), "AAFRESULT_ELEMENT_NOT_OBJECT" },
	{ EQUIV_AAFHRESULT(0x00DE), "AAFRESULT_PROP_ALREADY_PRESENT" },

/* MOB Error Codes */
	{ EQUIV_AAFHRESULT(0x00FA), "AAFRESULT_NOT_SOURCE_CLIP" },
	{ EQUIV_AAFHRESULT(0x00FB), "AAFRESULT_FILL_FOUND" },
	{ EQUIV_AAFHRESULT(0x00FC), "AAFRESULT_BAD_LENGTH" },
	{ EQUIV_AAFHRESULT(0x00FD), "AAFRESULT_BADRATE" },
	{ EQUIV_AAFHRESULT(0x00FE), "AAFRESULT_INVALID_ROUNDING" },
	{ EQUIV_AAFHRESULT(0x00FF), "AAFRESULT_TIMECODE_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0100), "AAFRESULT_NO_TIMECODE" },
	{ EQUIV_AAFHRESULT(0x0101), "AAFRESULT_INVALID_TIMECODE" },
	{ EQUIV_AAFHRESULT(0x0102), "AAFRESULT_SLOT_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0103), "AAFRESULT_BAD_SLOTLENGTH" },
	{ EQUIV_AAFHRESULT(0x0104), "AAFRESULT_MISSING_TRACKID" },
	{ EQUIV_AAFHRESULT(0x0105), "AAFRESULT_SLOT_EXISTS" },
	{ EQUIV_AAFHRESULT(0x0106), "AAFRESULT_MOB_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0107), "AAFRESULT_NO_MORE_MOBS" },
	{ EQUIV_AAFHRESULT(0x0108), "AAFRESULT_DUPLICATE_MOBID" },
	{ EQUIV_AAFHRESULT(0x0109), "AAFRESULT_MISSING_MOBID" },
	{ EQUIV_AAFHRESULT(0x010A), "AAFRESULT_EFFECTDEF_EXIST" },
	{ EQUIV_AAFHRESULT(0x010B), "AAFRESULT_INVALID_EFFECTDEF" },
	{ EQUIV_AAFHRESULT(0x010C), "AAFRESULT_INVALID_EFFECT" },
	{ EQUIV_AAFHRESULT(0x010D), "AAFRESULT_INVALID_EFFECTARG" },
	{ EQUIV_AAFHRESULT(0x010E), "AAFRESULT_INVALID_CVAL" },
	{ EQUIV_AAFHRESULT(0x010F), "AAFRESULT_RENDER_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0110), "AAFRESULT_BAD_ITHDL" },
	{ EQUIV_AAFHRESULT(0x0111), "AAFRESULT_NO_MORE_OBJECTS" },
	{ EQUIV_AAFHRESULT(0x0112), "AAFRESULT_ITER_WRONG_TYPE" },
	{ EQUIV_AAFHRESULT(0x0113), "AAFRESULT_INVALID_SEARCH_CRIT" },
	{ EQUIV_AAFHRESULT(0x0114), "AAFRESULT_INTERNAL_ITERATOR" },
	{ EQUIV_AAFHRESULT(0x0115), "AAFRESULT_NULL_MATCHFUNC" },
	{ EQUIV_AAFHRESULT(0x0116), "AAFRESULT_NULL_CALLBACKFUNC" },
	{ EQUIV_AAFHRESULT(0x0117), "AAFRESULT_TRAVERSAL_NOT_POSS" },
	{ EQUIV_AAFHRESULT(0x0118), "AAFRESULT_INVALID_TRAN_EFFECT" },
	{ EQUIV_AAFHRESULT(0x0119), "AAFRESULT_ADJACENT_TRAN" },
	{ EQUIV_AAFHRESULT(0x011A), "AAFRESULT_LEADING_TRAN" },
	{ EQUIV_AAFHRESULT(0x011B), "AAFRESULT_INSUFF_TRAN_MATERIAL" },
	{ EQUIV_AAFHRESULT(0x011C), "AAFRESULT_PULLDOWN_DIRECTION" },
	{ EQUIV_AAFHRESULT(0x011D), "AAFRESULT_PULLDOWN_FUNC" },
	{ EQUIV_AAFHRESULT(0x011E), "AAFRESULT_PULLDOWN_KIND" },
	{ EQUIV_AAFHRESULT(0x011F), "AAFRESULT_BAD_SRCH_ITER" },
	{ EQUIV_AAFHRESULT(0x0120), "AAFRESULT_NOT_COMPOSITION" },
	{ EQUIV_AAFHRESULT(0x0121), "AAFRESULT_NOT_A_TRACK" },
	{ EQUIV_AAFHRESULT(0x0122), "AAFRESULT_PARSE_EFFECT_AMBIGUOUS" },
	{ EQUIV_AAFHRESULT(0x0123), "AAFRESULT_NO_ESSENCE_DESC" },
	{ EQUIV_AAFHRESULT(0x0124), "AAFRESULT_TAPE_DESC_ONLY" },
	{ EQUIV_AAFHRESULT(0x0125), "AAFRESULT_FILM_DESC_ONLY" },
	{ EQUIV_AAFHRESULT(0x0126), "AAFRESULT_UNKNOWN_PARAMETER_CLASS" },
	{ EQUIV_AAFHRESULT(0x0127), "AAFRESULT_PARAMETER_NOT_FOUND" }, 
	{ EQUIV_AAFHRESULT(0x0128), "AAFRESULT_SEGMENT_NOT_FOUND" }, 
	{ EQUIV_AAFHRESULT(0x0129), "AAFRESULT_ESSENCE_NOT_FOUND" }, 
	{ EQUIV_AAFHRESULT(0x012A), "AAFRESULT_EVENT_SEMANTICS" },

/* SIMPLE COMPOSITION Error Codes */
	{ EQUIV_AAFHRESULT(0x012C), "AAFRESULT_BAD_STRACKHDL" },
	{ EQUIV_AAFHRESULT(0x012D), "AAFRESULT_STRACK_APPEND_ILLEGAL" },

/* Object Management Related Error Codes */
	{ EQUIV_AAFHRESULT(0x0130), "AAFRESULT_OBJECT_ALREADY_IN_FILE" },
	{ EQUIV_AAFHRESULT(0x0131), "AAFRESULT_OBJECT_NOT_IN_FILE" },
	{ EQUIV_AAFHRESULT(0x0132), "AAFRESULT_OBJECT_ALREADY_ATTACHED" },
	{ EQUIV_AAFHRESULT(0x0133), "AAFRESULT_OBJECT_NOT_ATTACHED" },
	{ EQUIV_AAFHRESULT(0x0134), "AAFRESULT_OBJECT_ALREADY_PERSISTENT" },
	{ EQUIV_AAFHRESULT(0x0135), "AAFRESULT_OBJECT_NOT_PERSISTENT" },

/* File kind/file encoding Error Codes */
	{ EQUIV_AAFHRESULT(0x0140), "AAFRESULT_FILEKIND_NOT_REGISTERED" },

/* GENERIC Error Codes ***/
	{ EQUIV_AAFHRESULT(0x015E), "AAFRESULT_NOMEMORY" },
	{ EQUIV_AAFHRESULT(0x015F), "AAFRESULT_OFFSET_SIZE" },
	{ EQUIV_AAFHRESULT(0x0160), "AAFRESULT_INTERNAL_NEG64" },
	{ EQUIV_AAFHRESULT(0x0161), "AAFRESULT_OVERFLOW64" },
	{ EQUIV_AAFHRESULT(0x0162), "AAFRESULT_NOT_IN_CURRENT_VERSION" },
	{ EQUIV_AAFHRESULT(0x0164), "AAFRESULT_NULL_PARAM" },
	{ EQUIV_AAFHRESULT(0x0165), "AAFRESULT_ZERO_DIVIDE" },
	{ EQUIV_AAFHRESULT(0x0166), "AAFRESULT_ALREADY_INITIALIZED" },
	{ EQUIV_AAFHRESULT(0x0167), "AAFRESULT_NOT_INITIALIZED" },
	{ EQUIV_AAFHRESULT(0x0168), "AAFRESULT_INTERNAL_ERROR" },
	{ EQUIV_AAFHRESULT(0x0169), "AAFRESULT_DATA_SIZE" },
	{ EQUIV_AAFHRESULT(0x016A), "AAFRESULT_ILLEGAL_VALUE" },
	{ EQUIV_AAFHRESULT(0x016B), "AAFRESULT_INVALID_TRANSPARENCY" },
	{ EQUIV_AAFHRESULT(0x016C), "AAFRESULT_INVALID_PARAM" },
	{ EQUIV_AAFHRESULT(0x016D), "AAFRESULT_INVALID_ENUM_VALUE" },

/* SEMANTIC CHECKING Error Codes */
	{ EQUIV_AAFHRESULT(0x0190), "AAFRESULT_REQUIRED_POSITIVE" },
	{ EQUIV_AAFHRESULT(0x0191), "AAFRESULT_INVALID_TRACKKIND" },
	{ EQUIV_AAFHRESULT(0x0192), "AAFRESULT_INVALID_EDGETYPE" },
	{ EQUIV_AAFHRESULT(0x0193), "AAFRESULT_INVALID_FILMTYPE" },
	{ EQUIV_AAFHRESULT(0x0194), "AAFRESULT_INVALID_MOBTYPE" },
	{ EQUIV_AAFHRESULT(0x0195), "AAFRESULT_INVALID_TAPECASETYPE" },
	{ EQUIV_AAFHRESULT(0x0196), "AAFRESULT_INVALID_VIDEOSIGNALTYPE" },
	{ EQUIV_AAFHRESULT(0x0197), "AAFRESULT_INVALID_TAPEFORMATTYPE" },
	{ EQUIV_AAFHRESULT(0x0198), "AAFRESULT_INVALID_EDITHINT" },
	{ EQUIV_AAFHRESULT(0x0199), "AAFRESULT_INVALID_INTERPKIND" },
	{ EQUIV_AAFHRESULT(0x019A), "AAFRESULT_INVALID_TRACK_REF" },
	{ EQUIV_AAFHRESULT(0x019B), "AAFRESULT_INVALID_OBJ" },
	{ EQUIV_AAFHRESULT(0x019C), "AAFRESULT_BAD_VIRTUAL_CREATE" },
	{ EQUIV_AAFHRESULT(0x019D), "AAFRESULT_INVALID_CLASS_ID" },
	{ EQUIV_AAFHRESULT(0x019E), "AAFRESULT_OBJECT_SEMANTIC" },
	{ EQUIV_AAFHRESULT(0x019F), "AAFRESULT_DATA_IN_SEMANTIC" },
	{ EQUIV_AAFHRESULT(0x01A0), "AAFRESULT_DATA_OUT_SEMANTIC" },
	{ EQUIV_AAFHRESULT(0x01A1), "AAFRESULT_TYPE_SEMANTIC" },
	{ EQUIV_AAFHRESULT(0x01A2), "AAFRESULT_INVALID_ATTRIBUTEKIND" },
	{ EQUIV_AAFHRESULT(0x01A3), "AAFRESULT_DATA_MDES_DISAGREE" },
	{ EQUIV_AAFHRESULT(0x01A4), "AAFRESULT_CODEC_SEMANTIC_WARN" },
	{ EQUIV_AAFHRESULT(0x01A5), "AAFRESULT_INVALID_BOOLTYPE" },

/* INTERNAL Error Codes */
	{ EQUIV_AAFHRESULT(0x01C2), "AAFRESULT_TABLE_DUP_KEY" },
	{ EQUIV_AAFHRESULT(0x01C3), "AAFRESULT_TABLE_MISSING_COMPARE" },
	{ EQUIV_AAFHRESULT(0x01C4), "AAFRESULT_TABLE_BAD_HDL" },
	{ EQUIV_AAFHRESULT(0x01C5), "AAFRESULT_TABLE_BAD_ITER" },
	{ EQUIV_AAFHRESULT(0x01C8), "AAFRESULT_PROPID_MATCH" },
	{ EQUIV_AAFHRESULT(0x01C9), "AAFRESULT_INTERNAL_DIVIDE" },
	{ EQUIV_AAFHRESULT(0x01CA), "AAFRESULT_ABSTRACT_CLASS" },
	{ EQUIV_AAFHRESULT(0x01CB), "AAFRESULT_WRONG_SIZE" },
	{ EQUIV_AAFHRESULT(0x01CC), "AAFRESULT_INCONSISTANCY" },

/* Reference implementation assertion violation (programming error) */
	{ EQUIV_AAFHRESULT(0x01D0), "AAFRESULT_ASSERTION_VIOLATION" },

/* Reference implementation unexpected C++ exception (programming error) */
	{ EQUIV_AAFHRESULT(0x01D1), "AAFRESULT_UNEXPECTED_EXCEPTION" },

/* Testing Error Codes */
	{ EQUIV_AAFHRESULT(0x01F4), "AAFRESULT_TEST_FAILED" },
	{ EQUIV_AAFHRESULT(0x01F5), "AAFRESULT_TEST_PARTIAL_SUCCESS" },
	{ ((HRESULT)0x80004001L), "AAFRESULT_NOT_IMPLEMENTED" },                         
	{ 0, "AAFRESULT_SUCCESS" },
	{ ((HRESULT)0x80004005L), "HRESULT_E_FAIL" },
	{ ((HRESULT)0x80004001L), "HRESULT_NOT_IMPLEMENTED" }, 

/* Property access error codes */
	{ EQUIV_AAFHRESULT(0x0200), "AAFRESULT_BAD_SIZE" },
	{ EQUIV_AAFHRESULT(0x0201), "AAFRESULT_NOT_REGISTERED" },
	{ EQUIV_AAFHRESULT(0x0202), "AAFRESULT_NOT_EXTENDABLE" },
	{ EQUIV_AAFHRESULT(0x0203), "AAFRESULT_ALREADY_UNIQUELY_IDENTIFIED" },
	{ EQUIV_AAFHRESULT(0x0204), "AAFRESULT_DEFAULT_ALREADY_USED" },

/* Object extension error codes */
	{ EQUIV_AAFHRESULT(0x0300), "AAFRESULT_EXTENSION_NOT_FOUND" },
	{ EQUIV_AAFHRESULT(0x0301), "AAFRESULT_EXTENSION_ALREADY_INITIALIZED" },
	{ EQUIV_AAFHRESULT(0x0302), "AAFRESULT_PLUGIN_NOT_REGISTERED" },
	{ EQUIV_AAFHRESULT(0x0303), "AAFRESULT_PLUGIN_ALREADY_REGISTERED" },
	{ EQUIV_AAFHRESULT(0x0304), "AAFRESULT_PLUGIN_CIRCULAR_REFERENCE" },
	{ EQUIV_AAFHRESULT(0x0305), "AAFRESULT_PLUGIN_INVALID_REFERENCE_COUNT" },

/* DLL/Shared Library runtime error codes */
	{ EQUIV_AAFHRESULT(0x0400), "AAFRESULT_DLL_LOAD_FAILED" },
    /* Either the DLL or a dependent DLL could not be found and loaded. */
	{ EQUIV_AAFHRESULT(0x0401), "AAFRESULT_DLL_SYMBOL_NOT_FOUND" },
    /* Expected symbol not exported from DLL. Need newer DLL. */
};

const int ResultCodesCount = sizeof(ResultCodes) / sizeof(ResultCodes[0]);
