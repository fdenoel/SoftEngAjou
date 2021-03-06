
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/

#include "g_inc_uib.h"

#include "uib_views_inc.h"
#include "uib_util.h"
#include "uib_views.h"
#include "uib_app_manager.h"

#define ICON_MIN_SIZE 30
#define DEF_STARTUP_VIEW_NAME "view1"


uib_views_st gst_uib_views;
static window_obj* g_win_obj = NULL;
window_obj* create_window_obj();
window_obj* get_window_obj();
void destroy_window_obj();
char* get_current_config_name ();

void uib_views_orientation_handler(int orient_status, Evas_Object* evas_obj_win);
uib_view_context* startup_view_create(window_obj* win);
void set_targeted_view(const char* view_name);

static void (*uib_view1_config_delegate_portrait)();
static void (*uib_view1_config_delegate_landscape)();

static void (*uib_view2_config_delegate_portrait)();
static void (*uib_view2_config_delegate_landscape)();

static void (*uib_view3_config_delegate_portrait)();
static void (*uib_view3_config_delegate_landscape)();

char*g_view1_config_name_portrait = NULL;
char*g_view1_config_name_landscape = NULL;

char*g_view2_config_name_portrait = NULL;
char*g_view2_config_name_landscape = NULL;

char*g_view3_config_name_portrait = NULL;
char*g_view3_config_name_landscape = NULL;


char* g_views_config_delegate_name_portrait=NULL;
char* g_views_config_delegate_name_landscape=NULL;
char* g_views_current_config_name=NULL;
	
static uib_view_context* g_uib_saved_vc = NULL;
static void push_to_stack_uib_vc(uib_view_context* push_vc);
static void pop_from_stack_uib_vc(uib_view_context* pop_vc);
static void uib_views_current_view_redraw();

static void uib_views_orientation_changed_cb(void*, Evas_Object*, void*);

typedef enum _uib_gengrid_item_style_e{
	UIB_GENGRID_ITEM_STYLE_UNKNOWN=-1,
	UIB_GENGRID_ITEM_STYLE_DEFAULT,
	UIB_GENGRID_ITEM_STYLE_TYPE1,
	UIB_GENGRID_ITEM_STYLE_TYPE2,
	UIB_GENGRID_ITEM_STYLE_SIZE
} uib_gengrid_item_style_e;

typedef enum _uib_genlist_item_style_e{
	UIB_GENLIST_ITEM_STYLE_UNKNOWN=-1,
	UIB_GENLIST_ITEM_STYLE_TYPE1,
	UIB_GENLIST_ITEM_STYLE_TYPE2,
	UIB_GENLIST_ITEM_STYLE_MULTILINE,
	UIB_GENLIST_ITEM_STYLE_FULL,
	UIB_GENLIST_ITEM_STYLE_GROUPINDEX,
	UIB_GENLIST_ITEM_STYLE_GROUPINDEX_EXPANDABLE,
	UIB_GENLIST_ITEM_STYLE_DEFAULT,
	UIB_GENLIST_ITEM_STYLE_DOUBLE_LABEL,
	UIB_GENLIST_ITEM_STYLE_ONE_ICON,
	UIB_GENLIST_ITEM_STYLE_END_ICON,
	UIB_GENLIST_ITEM_STYLE_SIZE
} uib_genlist_item_style_e;

static Elm_Gengrid_Item_Class* _gic[UIB_GENGRID_ITEM_STYLE_SIZE];
static void destory_gengrid_item_class();
static uib_gengrid_item_style_e get_gengrid_item_style_e(const char* style);
static Elm_Gengrid_Item_Class* get_gengrid_item_class(const char* style);
static Elm_Gengrid_Item_Class* create_gengrid_item_class(const char* style);

static Elm_Genlist_Item_Class* _gis[UIB_GENLIST_ITEM_STYLE_SIZE];
static void destory_genlist_item_class();
static uib_genlist_item_style_e get_genlist_item_style_e(const char* style);
static Elm_Genlist_Item_Class* get_genlist_item_class(const char* style);
static Elm_Genlist_Item_Class* create_genlist_item_class(const char* style);

void uib_views_init() {
	if(!gst_uib_views.is_init) {
		gst_uib_views.is_init = true;
		gst_uib_views.create_window_obj = &create_window_obj;
		gst_uib_views.destroy_window_obj = &destroy_window_obj;
		gst_uib_views.get_window_obj = &get_window_obj;
		gst_uib_views.get_window = &get_window;
		gst_uib_views.get_conformant = &get_conformant;
		gst_uib_views.uib_views_current_view_redraw = &uib_views_current_view_redraw;
		gst_uib_views.uib_views_orientation_handler = &uib_views_orientation_handler;
		gst_uib_views.startup_view_create = &startup_view_create;
		gst_uib_views.set_targeted_view = &set_targeted_view;
		gst_uib_views.get_current_config_name = &get_current_config_name;

		// check resoltuion type
		const uib_device_info_st* uib_device_info = uib_app_manager_get_instance()->get_uib_device_info();
		switch(uib_device_info->resolution_type) {
		case e_resolution_HD:
			uib_view1_config_delegate_portrait = &uib_view1_config_HD_portrait;
			g_view1_config_name_portrait = "common";
			uib_view1_config_delegate_landscape = &uib_view1_config_HD_portrait;
			g_view1_config_name_landscape = "common";

			uib_view2_config_delegate_portrait = &uib_view2_config_HD_portrait;
			g_view2_config_name_portrait = "common";
			uib_view2_config_delegate_landscape = &uib_view2_config_HD_portrait;
			g_view2_config_name_landscape = "common";

			uib_view3_config_delegate_portrait = &uib_view3_config_HD_portrait;
			g_view3_config_name_portrait = "common";
			uib_view3_config_delegate_landscape = &uib_view3_config_HD_portrait;
			g_view3_config_name_landscape = "common";

			break;

		default:
			uib_view1_config_delegate_portrait = &uib_view1_config_HD_portrait;
			uib_view1_config_delegate_landscape = &uib_view1_config_HD_portrait;
			g_view1_config_name_portrait = "common";
			g_view1_config_name_landscape = "common";

			uib_view2_config_delegate_portrait = &uib_view2_config_HD_portrait;
			uib_view2_config_delegate_landscape = &uib_view2_config_HD_portrait;
			g_view2_config_name_portrait = "common";
			g_view2_config_name_landscape = "common";

			uib_view3_config_delegate_portrait = &uib_view3_config_HD_portrait;
			uib_view3_config_delegate_landscape = &uib_view3_config_HD_portrait;
			g_view3_config_name_portrait = "common";
			g_view3_config_name_landscape = "common";


			break;
		}
	}
}

uib_views_st* uib_views_get_instance() {
	uib_views_init();
	return &gst_uib_views;
}


void uib_views_create_callback(void* vc, Evas* e, Evas_Object* obj, void* event_info) {
	push_to_stack_uib_vc(vc);
	evas_object_smart_callback_call(obj, KEY_VIEW_CREATE, event_info);
}

void uib_views_destroy_callback(void* vc, Evas* e, Evas_Object* obj, void* event_info) {
	evas_object_smart_callback_call(obj, KEY_VIEW_DESTROY, event_info);
	pop_from_stack_uib_vc(vc);
}

// called by views_create_callback
void push_to_stack_uib_vc(uib_view_context* push_vc) {
	evas_object_data_set(push_vc->root_container, KEY_VIEW_VC_SAVE, g_uib_saved_vc);
	g_uib_saved_vc = push_vc;
}

// called by views_destroy_callback
void pop_from_stack_uib_vc(uib_view_context* pop_vc) {
	uib_view_context* rollback_vc = evas_object_data_get(pop_vc->root_container, KEY_VIEW_VC_SAVE);
	g_uib_saved_vc = rollback_vc;
	if(g_uib_saved_vc) {
		set_targeted_view(g_uib_saved_vc->view_name);
	}
}

void set_targeted_view(const char* view_name) {
	if(!strcmp(view_name,"view1")) {
		gst_uib_views.uib_view_target_config_portrait = uib_view1_config_delegate_portrait;
		gst_uib_views.uib_view_target_config_landscape = uib_view1_config_delegate_landscape;

		g_views_config_delegate_name_portrait = g_view1_config_name_portrait;
		g_views_config_delegate_name_landscape = g_view1_config_name_landscape;

		uib_util_rotation_set(g_win_obj->win, e_rotation_fullSensor);
	} else if(!strcmp(view_name,"view2")) {
		gst_uib_views.uib_view_target_config_portrait = uib_view2_config_delegate_portrait;
		gst_uib_views.uib_view_target_config_landscape = uib_view2_config_delegate_landscape;

		g_views_config_delegate_name_portrait = g_view2_config_name_portrait;
		g_views_config_delegate_name_landscape = g_view2_config_name_landscape;

		uib_util_rotation_set(g_win_obj->win, e_rotation_fullSensor);
	} else if(!strcmp(view_name,"view3")) {
		gst_uib_views.uib_view_target_config_portrait = uib_view3_config_delegate_portrait;
		gst_uib_views.uib_view_target_config_landscape = uib_view3_config_delegate_landscape;

		g_views_config_delegate_name_portrait = g_view3_config_name_portrait;
		g_views_config_delegate_name_landscape = g_view3_config_name_landscape;

		uib_util_rotation_set(g_win_obj->win, e_rotation_fullSensor);
	}
	int orientation=elm_win_rotation_get(uib_views_get_instance()->get_window());
	uib_views_get_instance()->uib_views_orientation_handler(orientation, uib_views_get_instance()->get_window());
}

void uib_views_orientation_handler(int orient_status, Evas_Object* evas_obj_win) {
	switch(DEF_UIB_ORIENT_TYPE(orient_status)) {
	case e_orientation_port:
		uib_views_get_instance()->uib_view_target_config_portrait();
		g_views_current_config_name = g_views_config_delegate_name_portrait;
		break;
	case e_orientation_land:
		uib_views_get_instance()->uib_view_target_config_landscape();
		g_views_current_config_name = g_views_config_delegate_name_landscape;
		break;
	default:
		uib_views_get_instance()->uib_view_target_config_portrait();
		g_views_current_config_name = g_views_config_delegate_name_portrait;
		break;
	}
}

char* get_current_config_name() {
	return g_views_current_config_name;
}


void uib_views_orientation_changed_cb(void *win, Evas_Object *obj, void *event_info) {
	int orientation=elm_win_rotation_get(win);
	uib_views_orientation_handler(orientation, win);
}

void uib_views_current_view_redraw() {
	uib_views_orientation_changed_cb(g_win_obj->win, NULL, NULL);
}


uib_view_context* startup_view_create(window_obj* win_obj)
{
	evas_object_smart_callback_add(win_obj->win, KEY_WM_ROTATION_CHANGED, uib_views_orientation_changed_cb, win_obj->win);
	uib_util_push_view(DEF_STARTUP_VIEW_NAME);
	return uib_app_manager_get_instance()->find_view_context(DEF_STARTUP_VIEW_NAME);
}


window_obj* create_window_obj()
{
	g_win_obj = calloc(1, sizeof(window_obj));
	if (!g_win_obj) {
		return NULL;
	}
	g_win_obj->win = elm_win_add(NULL, NULL, ELM_WIN_BASIC);
	elm_win_conformant_set(g_win_obj->win, EINA_TRUE);
	evas_object_show(g_win_obj->win);
	g_win_obj->bg = elm_bg_add(g_win_obj->win);
	evas_object_size_hint_weight_set(g_win_obj->bg, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
	elm_win_resize_object_add(g_win_obj->win, g_win_obj->bg);
	evas_object_show(g_win_obj->bg);

	elm_win_indicator_mode_set(g_win_obj->win, ELM_WIN_INDICATOR_SHOW);
	g_win_obj->conformant = elm_conformant_add(g_win_obj->win);
	evas_object_size_hint_weight_set(g_win_obj->conformant, EVAS_HINT_EXPAND, EVAS_HINT_EXPAND);
	elm_win_resize_object_add(g_win_obj->win, g_win_obj->conformant);
	evas_object_show(g_win_obj->conformant);

	g_win_obj->app_naviframe = elm_naviframe_add(g_win_obj->conformant);
	elm_object_content_set(g_win_obj->conformant, g_win_obj->app_naviframe);
	
	evas_object_data_set(g_win_obj->win, "root", g_win_obj);
	return g_win_obj;
}
			


void destroy_window_obj()
{
	if (g_win_obj) {
		evas_object_del(g_win_obj->win);
		free(g_win_obj);
		g_win_obj = NULL;
	}
	destory_genlist_item_class();
	destory_gengrid_item_class();
}

window_obj* get_window_obj() {
	return g_win_obj;
}

Evas_Object* get_window() {
	return gst_uib_views.get_window_obj()->win;
}

Evas_Object* get_conformant() {
	return gst_uib_views.get_window_obj()->conformant;
}

/***********************************************************************************************
 *
 * item class callbacks
 *
 ***********************************************************************************************/
static Evas_Object* create_item_image(Evas_Object* parent, const char* path) {
	Evas_Object *icon = elm_icon_add(parent);
	char *resource_path = NULL;

	uib_util_rm_get_resource_path(APP_RESOURCE_TYPE_IMAGE, path, &resource_path);
			
	elm_image_file_set(icon, resource_path, NULL);
	if(resource_path) {
		free(resource_path);
	}
	evas_object_size_hint_min_set(icon, ELM_SCALE_SIZE(ICON_MIN_SIZE),ELM_SCALE_SIZE(ICON_MIN_SIZE));
	evas_object_show(icon);
	return icon;
}

char* uib_genlist_label_get(void *data, Evas_Object *obj, const char *part) {
	uib_genlist_item *item = (uib_genlist_item*)data;
	if(!strcmp(part, "elm.text")) {
		if (item->label) {
			return strdup(item->label);
		}
	}
	else if (!strcmp(part, "elm.text.sub")) {
		if (item->sub_label) {
			return strdup(item->sub_label);
		}
	}
	return NULL;
}

Evas_Object* uib_genlist_icon_get(void *data , Evas_Object *obj, const char *part) {
	uib_genlist_item *item = (uib_genlist_item*) data;
	if (!strcmp(part, "elm.swallow.icon")) {
		if(item->icon_standard){
			Evas_Object *ic = elm_icon_add(obj);
			elm_icon_standard_set(ic, item->icon_standard);
			evas_object_size_hint_min_set(ic, ELM_SCALE_SIZE(ICON_MIN_SIZE),ELM_SCALE_SIZE(ICON_MIN_SIZE));
			return ic;
		} else if(item->icon_path){
			return create_item_image(obj, item->icon_path);
		}
	}
		
		
	if (!strcmp(part, "elm.swallow.end")) {
		if (item->end_icon_standard) {
			Evas_Object *ic = elm_icon_add(obj);
			elm_icon_standard_set(ic, item->end_icon_standard);
			evas_object_size_hint_min_set(ic, ELM_SCALE_SIZE(ICON_MIN_SIZE),ELM_SCALE_SIZE(ICON_MIN_SIZE));
			return ic;
		} else if (item->end_icon_path) {
			return create_item_image(obj, item->end_icon_path);
		}
	}
	return NULL;
}

Eina_Bool uib_genlist_state_get(void *data , Evas_Object *obj , const char *part) {
	return EINA_FALSE;
}

void uib_genlist_del(void *data , Evas_Object *obj) {
	uib_genlist_item *item = (uib_genlist_item*)data;
	if (item) {
		if (item->label) free(item->label);
		if (item->sub_label) free(item->sub_label);
		if (item->icon_path) free(item->icon_path);
		if (item->icon_standard) free(item->icon_standard);
		if (item->end_icon_path) free(item->end_icon_path);
		if (item->end_icon_standard) free(item->end_icon_standard);
		free(item);
	}
}


Elm_Object_Item* create_genlist_item(Evas_Object* genlist, const char* style, const char* label, const char* sub_label, const char* icon_path, const char* icon_standard, const char* end_icon_path, const char* end_icon_standard, Elm_Object_Item* parent, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, void* data){
	uib_genlist_item* item = malloc(sizeof(uib_genlist_item));
	memset(item, 0x0, sizeof(uib_genlist_item));

	item->label = strdup(label);
	item->sub_label = strdup(sub_label);
	if(strlen(icon_path) != 0){
		item->icon_path = strdup(icon_path);
	} else if(strlen(icon_standard) != 0){
		item->icon_standard = strdup(icon_standard);
    }
	
	if(strlen(end_icon_path) != 0){
		item->end_icon_path = strdup(end_icon_path);
	} else if(strlen(end_icon_standard) != 0){
		item->end_icon_standard = strdup(end_icon_standard);
	}
	
	uib_genlist_item_style_e style_e = get_genlist_item_style_e(style);
	if(style_e == UIB_GENLIST_ITEM_STYLE_GROUPINDEX) {
		type = ELM_GENLIST_ITEM_TREE;
	}
	return elm_genlist_item_append(genlist,  get_genlist_item_class(style), item, parent, type, func, data);
}

static void destory_genlist_item_class() {
	for(int i = 0; i< UIB_GENLIST_ITEM_STYLE_SIZE; i++) {
		Elm_Genlist_Item_Class *itc = _gis[i];
		if(itc != NULL) {
			elm_genlist_item_class_free(itc);
		}
	}
}

static Elm_Genlist_Item_Class* get_genlist_item_class(const char* style) {
	uib_genlist_item_style_e style_e = get_genlist_item_style_e(style);
	Elm_Genlist_Item_Class *itc = _gis[style_e];
	if(itc == NULL) {
		itc = create_genlist_item_class(style);
		if(itc != NULL) {
			_gis[style_e] = itc;
		}
	}
	return itc;
}

static Elm_Genlist_Item_Class* create_genlist_item_class(const char* style) {
	Elm_Genlist_Item_Class *itc = elm_genlist_item_class_new();
	itc->item_style = style;
	itc->func.text_get = uib_genlist_label_get;
	itc->func.content_get = uib_genlist_icon_get;
	itc->func.state_get = uib_genlist_state_get;
	itc->func.del = uib_genlist_del;

	return itc;
}

char* uib_gengrid_label_get(void *data, Evas_Object *obj, const char *part) {
	uib_gengrid_item *item = (uib_gengrid_item*)data;
	if (item->label) {
		return strdup(item->label);
	} else {
		return NULL;
	}
}

Evas_Object* uib_gengrid_icon_get(void *data, Evas_Object *obj, const char *part) {
	uib_gengrid_item *item = (uib_gengrid_item*) data;
	if (!strcmp(part, "elm.swallow.icon") && item->icon_path) {
		return create_item_image(obj, item->icon_path);
	} else {
		return NULL;
	}
}

Eina_Bool uib_gengrid_state_get(void *data, Evas_Object *obj, const char *part) {
	return EINA_FALSE;
}

void uib_gengrid_del(void *data, Evas_Object *obj) {
	uib_gengrid_item *item = (uib_gengrid_item*)data;
	if (item) {
		if (item->label) free(item->label);
		if (item->icon_path) free(item->icon_path);
		free(item);
	}
}

static void destory_gengrid_item_class() {
	for(int i = 0; i< UIB_GENGRID_ITEM_STYLE_SIZE; i++) {
		Elm_Genlist_Item_Class *itc = _gic[i];
		if(itc != NULL) {
			elm_gengrid_item_class_free(itc);
		}
	}
}

static Elm_Gengrid_Item_Class* get_gengrid_item_class(const char* style) {
	uib_gengrid_item_style_e style_e = get_gengrid_item_style_e(style);
	Elm_Gengrid_Item_Class *itc = _gic[style_e];
	if(itc == NULL) {
		itc = create_gengrid_item_class(style);
		if(itc != NULL) {
			_gic[style_e] = itc;
		}
	}
	return itc;
}

static Elm_Gengrid_Item_Class* create_gengrid_item_class(const char* style) {
	Elm_Gengrid_Item_Class *itc = elm_gengrid_item_class_new();
	itc->item_style = style;
	itc->func.text_get = uib_gengrid_label_get;
	itc->func.content_get = uib_gengrid_icon_get;
	itc->func.state_get = uib_gengrid_state_get;
	itc->func.del = uib_gengrid_del;

	return itc;
}

Elm_Object_Item* create_multibuttonentry_item(Evas_Object* multibuttonentry, const char* label, Evas_Smart_Cb func, void* data) {
	Elm_Object_Item* item = elm_multibuttonentry_item_append(multibuttonentry, label, func, data); 
	return item;
}

Elm_Object_Item* create_gengrid_item(Evas_Object* gengrid, const char* style, const char* label, const char* path, Evas_Smart_Cb func, void* data) {
	uib_gengrid_item* item = malloc(sizeof(uib_gengrid_item));
	memset(item, 0x0, sizeof(uib_gengrid_item));	
	item->label = strdup(label);
	item->icon_path = strdup(path);

	return elm_gengrid_item_append(gengrid, get_gengrid_item_class(style), item, func, data);
}

static uib_gengrid_item_style_e get_gengrid_item_style_e(const char* style) {
	uib_gengrid_item_style_e item_style = UIB_GENGRID_ITEM_STYLE_UNKNOWN;

	if(!strcmp("default", style)){
		item_style = UIB_GENGRID_ITEM_STYLE_DEFAULT;
	}else if(!strcmp("type1", style)){
		item_style = UIB_GENGRID_ITEM_STYLE_TYPE1;
	}else if(!strcmp("type2", style)){
		item_style = UIB_GENGRID_ITEM_STYLE_TYPE2;
	}else {
		item_style = UIB_GENGRID_ITEM_STYLE_DEFAULT;
	}

	return item_style;
}

static uib_genlist_item_style_e get_genlist_item_style_e(const char* style) {
	uib_genlist_item_style_e item_style = UIB_GENLIST_ITEM_STYLE_UNKNOWN;

	if(!strcmp("type1", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_TYPE1;
	}else if(!strcmp("type2", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_TYPE2;
	}else if(!strcmp("multiline", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_MULTILINE;
	}else if(!strcmp("full", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_FULL;
	}else if(!strcmp("group_index", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_GROUPINDEX;
	}else if(!strcmp("group_index/expandable", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_GROUPINDEX_EXPANDABLE;
	}else if(!strcmp("default", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_DEFAULT;
	}else if(!strcmp("double_label", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_DOUBLE_LABEL;
	}else if(!strcmp("one_icon", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_ONE_ICON;
	}else if(!strcmp("end_icon", style)){
		item_style = UIB_GENLIST_ITEM_STYLE_END_ICON;
	}else{
		item_style = UIB_GENLIST_ITEM_STYLE_DEFAULT;
	}

	return item_style;
}
