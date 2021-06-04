/*
 * sec_negotiate_rsp_data.h
 *
 *
 */

#ifndef _OpenAPI_sec_negotiate_rsp_data_H_
#define _OpenAPI_sec_negotiate_rsp_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "plmn_id.h"
#include "security_capability.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_sec_negotiate_rsp_data_s OpenAPI_sec_negotiate_rsp_data_t;
typedef struct OpenAPI_sec_negotiate_rsp_data_s {
    char *sender;
    OpenAPI_security_capability_e selected_sec_capability;
    int _3_gpp_sbi_target_api_root_supported;
    OpenAPI_list_t *plmn_id_list;
} OpenAPI_sec_negotiate_rsp_data_t;

OpenAPI_sec_negotiate_rsp_data_t *OpenAPI_sec_negotiate_rsp_data_create(
    char *sender,
    OpenAPI_security_capability_e selected_sec_capability,
    int _3_gpp_sbi_target_api_root_supported,
    OpenAPI_list_t *plmn_id_list
    );
void OpenAPI_sec_negotiate_rsp_data_free(OpenAPI_sec_negotiate_rsp_data_t *sec_negotiate_rsp_data);
OpenAPI_sec_negotiate_rsp_data_t *OpenAPI_sec_negotiate_rsp_data_parseFromJSON(cJSON *sec_negotiate_rsp_dataJSON);
cJSON *OpenAPI_sec_negotiate_rsp_data_convertToJSON(OpenAPI_sec_negotiate_rsp_data_t *sec_negotiate_rsp_data);
OpenAPI_sec_negotiate_rsp_data_t *OpenAPI_sec_negotiate_rsp_data_copy(OpenAPI_sec_negotiate_rsp_data_t *dst, OpenAPI_sec_negotiate_rsp_data_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_sec_negotiate_rsp_data_H_ */

