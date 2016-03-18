/*******************************************************************************
  MPLAB Harmony Graphics Composer Generated Definitions Header

  File Name:
    gfx_hgc_definitions.h

  Summary:
    Build-time generated definitions header based on output by the MPLAB Harmony
    Graphics Composer.

  Description:
    Build-time generated definitions header based on output by the MPLAB Harmony
    Graphics Composer.

    Created with MPLAB Harmony Version 1.07
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
// DOM-IGNORE-END


#ifndef _GFX_HGC_DEFINITIONS_H
#define _GFX_HGC_DEFINITIONS_H

#include "system_config.h"
#include "system_definitions.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END 

typedef enum
{
    HGC_STATE_INIT = 0,
    HGC_STATE_RUNNING
} HGC_STATES;

typedef enum
{
    HGC_SCREEN_STATE_INIT = 0,
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen1,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen1,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen1,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen1,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen1,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen1,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen1,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen1,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen2,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen2,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen2,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen2,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen2,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen2,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen2,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen2,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen3,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen3,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen3,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen3,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen3,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen3,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen3,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen3,
	
} HGC_SCREEN_STATES;

/*** Line IDs ***/
#define Line17                 950 
	
#define Line16                 951 
	
#define Line15                 952 
	
#define Line8                 953 
	
#define Line14                 954 
	
#define Line13                 955 
	
#define Line12                 956 
	
#define Line11                 957 
	
#define Line10                 958 
	
#define Line9                 959 
	
#define Line7                 960 
	
#define Line6                 961 
	
#define Line5                 962 
	
#define Line4                 963 
	
#define Line3                 964 
	
#define Line2                 965 
	
#define Line1                 966 
	
/*** Rectangle IDs ***/
#define Rectangle5                 1000 
	
#define Rectangle4                 1001 
	
#define Rectangle1                 1002 
	
#define Rectangle2                 1003 
	
#define Rectangle3                 1004 
	
/*** Circle IDs ***/
#define Circle10                 1050 
	
#define Circle9                 1051 
	
#define Circle8                 1052 
	
#define Circle7                 1053 
	
#define Circle6                 1054 
	
#define Circle5                 1055 
	
#define Circle4                 1056 
	
#define Circle3                 1057 
	
#define Circle2                 1058 
	
#define Circle1                 1059 
	
/*** Image IDs ***/
#define Image1                 1100 
	
/*** Text IDs ***/
#define Text1                 1150 
	
/*** Screen IDs ***/
#define Screen1                 0 
	
#define Screen2                 1 
	
#define Screen3                 2 
	


// *****************************************************************************
/* MPLAB Harmony Graphics Composer Objects

  Summary:
    Structure holding the graphics object handles

  Description:
    This structure contains the object handles for all graphics objects 
    generated by the Harmony Graphics Composer

  Remarks:
*/

typedef struct HGC_OBJECTS
{
    HGC_SCREEN_STATES screenState;      // current state of screen state machine
    HGC_SCREEN_STATES prevRefreshState; // previous state of screen state machine

    /*** GOL Objects References ***/
} HGC_OBJECTS;

extern HGC_OBJECTS hgcObj;

/******************************************************************************
  Function:
    void GFX_HGC_Initialize ( void )

  Summary:
    This function initializes the HGC state machine.  
 */
void GFX_HGC_Initialize ( void );


/******************************************************************************
  Function:
    void GFX_HGC_Setup ( void )

  Summary:
    This function sets up the GOL message callback and draw callbacks.  
 */
void GFX_HGC_Setup ( void );


/******************************************************************************
  Function:
    HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void )

  Remarks:
    This function returns the screen state
 */
HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void );


/******************************************************************************
  Function:
    void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState )

  Remarks:
    This function sets the screen state machine to a new state
 */
void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState );


/******************************************************************************
  Function:
    void GFX_HGC_Tasks (SYS_MODULE_OBJ gfxObject);

  Summary:
    This function is called in SYS_Tasks.  The intent wait until the GFX library
    is initialized before supplying items to draw
*/
void GFX_HGC_Tasks  (SYS_MODULE_OBJ gfxObject);


/******************************************************************************
  Function: 
    void GFX_HGC_DrawScreenTask( void )

  Remarks: 
    Task loop to drive the HGC generated screen state machine for HGC design
    that has GFX_Primitives only
 */
void GFX_HGC_DrawScreenTask( void );


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawScreen_Primitives( uint8_t  screenId )

  Output:
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    HGC-specified GFX Primitives are drawn here, grouped by screen.
    GFX Primitives are drawn after GFX GOL Objects to make sure GFX GOL Objects
    do not cover GFX Primitives
 */
bool GFX_HGC_DrawScreen_Primitives(uint8_t screenId);


/******************************************************************************
  Function: 
    void GFX_HGC_SetupScreen( uint8_t  screenId )

  Remarks: 
    Clears current screen and starts a fresh screen with its background color
 */
void GFX_HGC_SetupScreen(uint8_t screenId);


/******************************************************************************
  Function: 
    bool GFX_HGC_HasCurrentScreenDrawn( void )

  Output: 
    Returns true if the current screen is completely drawn

  Remarks: 
    Allows application to know if the current screen is finished drawing
 */
bool GFX_HGC_HasCurrentScreenDrawn( void );


/******************************************************************************
  Function: 
    bool GFX_HGC_ChangeScreen( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    Can be called to initiate GFX Library to draw a new screen
 */
bool GFX_HGC_ChangeScreen(uint8_t screenId);


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawItem(int itemId)

  Output:
    Returns true if a itemId matches an existing item identifier

  Remarks: 
    Every item specified in every screen in HGC is listed in this function
 */
bool GFX_HGC_DrawItem(int itemId);



//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // _GFX_HGC_DEFINITIONS_H
/*******************************************************************************
 End of File
*/
