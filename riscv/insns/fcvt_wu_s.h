require_extension('F');
require_fp;
softfloat_roundingMode = RM;
WRITE_RD(sext32(f32_to_ui32(FRS1, RM, true)));
set_fp_exceptions;
