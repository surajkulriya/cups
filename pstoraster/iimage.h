/* Copyright (C) 1996, 1997, 1998 Aladdin Enterprises.  All rights reserved.
  
  This file is part of GNU Ghostscript.
  
  GNU Ghostscript is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY.  No author or distributor accepts responsibility
  to anyone for the consequences of using it or for whether it serves any
  particular purpose or works at all, unless he says so in writing.  Refer
  to the GNU General Public License for full details.
  
  Everyone is granted permission to copy, modify and redistribute GNU
  Ghostscript, but only under the conditions described in the GNU General
  Public License.  A copy of this license is supposed to have been given
  to you along with GNU Ghostscript so you can know your rights and
  responsibilities.  It should be in a file named COPYING.  Among other
  things, the copyright notice and this notice must be preserved on all
  copies.
  
  Aladdin Enterprises supports the work of the GNU Project, but is not
  affiliated with the Free Software Foundation or the GNU Project.  GNU
  Ghostscript, as distributed by Aladdin Enterprises, does not require any
  GNU software to build or run it.
*/

/*$Id$ */
/* Requires gscspace.h, gxiparam.h */

#ifndef iimage_INCLUDED
#  define iimage_INCLUDED

/* These procedures are exported by zimage.c for other modules. */

/* Exported for zcolor1.c and zdpnext.c */
int zimage_opaque_setup(P5(os_ptr op, bool multi, gs_image_alpha_t alpha,
			   const gs_color_space * pcs, int npop));

/* Exported for zimage2.c */
int zimage_setup(P4(const gs_pixel_image_t * pim, const ref * sources,
		    bool uses_color, int npop));

/* Exported for zcolor3.c */
int zimage_data_setup(P4(const gs_pixel_image_t * pim,
			 gx_image_enum_common_t * pie,
			 const ref * sources, int npop));

#endif /* iimage_INCLUDED */