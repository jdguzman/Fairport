//
// This file is automatically generated, do not hand edit!
//

#include "C:\Users\terrymah\Documents\projects\fairport\fairport\util\primitives.h"
#include "C:\Users\terrymah\Documents\projects\fairport\fairport\disk\disk.h"

using namespace fairport;
using namespace fairport::disk;

struct pstvalue
{
    const wchar_t* name;
    int v;
};

const pstvalue values[] = {
	{ L"sizeof(uint)", sizeof(uint) },
	{ L"sizeof(ulong)", sizeof(ulong) },
	{ L"sizeof(slong)", sizeof(slong) },
	{ L"sizeof(ulonglong)", sizeof(ulonglong) },
	{ L"sizeof(slonglong)", sizeof(slonglong) },
	{ L"sizeof(byte)", sizeof(byte) },
	{ L"sizeof(ushort)", sizeof(ushort) },
	{ L"sizeof(node_id)", sizeof(node_id) },
	{ L"sizeof(block_id)", sizeof(block_id) },
	{ L"sizeof(page_id)", sizeof(page_id) },
	{ L"sizeof(heap_id)", sizeof(heap_id) },
	{ L"sizeof(heapnode_id)", sizeof(heapnode_id) },
	{ L"sizeof(prop_id)", sizeof(prop_id) },
	{ L"sizeof(row_id)", sizeof(row_id) },

	// enum nid_type
	{ L"nid_type_none", nid_type_none },
	{ L"nid_type_internal", nid_type_internal },
	{ L"nid_type_folder", nid_type_folder },
	{ L"nid_type_search_folder", nid_type_search_folder },
	{ L"nid_type_message", nid_type_message },
	{ L"nid_type_attachment", nid_type_attachment },
	{ L"nid_type_search_update_queue", nid_type_search_update_queue },
	{ L"nid_type_search_criteria_object", nid_type_search_criteria_object },
	{ L"nid_type_associated_message", nid_type_associated_message },
	{ L"nid_type_storage", nid_type_storage },
	{ L"nid_type_contents_table_index", nid_type_contents_table_index },
	{ L"nid_type_receive_folder_table", nid_type_receive_folder_table },
	{ L"nid_type_outgoing_queue_table", nid_type_outgoing_queue_table },
	{ L"nid_type_hierarchy_table", nid_type_hierarchy_table },
	{ L"nid_type_contents_table", nid_type_contents_table },
	{ L"nid_type_associated_contents_table", nid_type_associated_contents_table },
	{ L"nid_type_search_contents_table", nid_type_search_contents_table },
	{ L"nid_type_attachment_table", nid_type_attachment_table },
	{ L"nid_type_recipient_table", nid_type_recipient_table },
	{ L"nid_type_search_table_index", nid_type_search_table_index },
	{ L"nid_type_contents_smp", nid_type_contents_smp },
	{ L"nid_type_associated_contents_smp", nid_type_associated_contents_smp },
	{ L"nid_type_change_history_table", nid_type_change_history_table },
	{ L"nid_type_tombstone_table", nid_type_tombstone_table },
	{ L"nid_type_tombstone_date_table", nid_type_tombstone_date_table },
	{ L"nid_type_lrep_dups_table", nid_type_lrep_dups_table },
	{ L"nid_type_folder_path_tombstone_table", nid_type_folder_path_tombstone_table },
	{ L"nid_type_ltp", nid_type_ltp },
	{ L"nid_type_mask", nid_type_mask },

	// enum predefined_nid
	{ L"nid_message_store", nid_message_store },
	{ L"nid_name_id_map", nid_name_id_map },
	{ L"nid_normal_folder_template", nid_normal_folder_template },
	{ L"nid_search_folder_template", nid_search_folder_template },
	{ L"nid_root_folder", nid_root_folder },
	{ L"nid_search_management_queue", nid_search_management_queue },
	{ L"nid_search_activity_list", nid_search_activity_list },
	{ L"nid_search_domain_alternative", nid_search_domain_alternative },
	{ L"nid_search_domain_object", nid_search_domain_object },
	{ L"nid_search_gatherer_queue", nid_search_gatherer_queue },
	{ L"nid_search_gatherer_descriptor", nid_search_gatherer_descriptor },
	{ L"nid_table_rebuild_queue", nid_table_rebuild_queue },
	{ L"nid_junk_mail_pihsl", nid_junk_mail_pihsl },
	{ L"nid_search_gatherer_folder_queue", nid_search_gatherer_folder_queue },
	{ L"nid_tc_sub_props", nid_tc_sub_props },
	{ L"nid_index_template", nid_index_template },
	{ L"nid_hierarchy_table_template", nid_hierarchy_table_template },
	{ L"nid_contents_table_template", nid_contents_table_template },
	{ L"nid_associated_contents_table_template", nid_associated_contents_table_template },
	{ L"nid_search_contents_table_template", nid_search_contents_table_template },
	{ L"nid_smp_template", nid_smp_template },
	{ L"nid_tombstone_table_template", nid_tombstone_table_template },
	{ L"nid_lrep_dups_table_template", nid_lrep_dups_table_template },
	{ L"nid_receive_folders", nid_receive_folders },
	{ L"nid_outgoing_queue", nid_outgoing_queue },
	{ L"nid_attachment_table", nid_attachment_table },
	{ L"nid_recipient_table", nid_recipient_table },
	{ L"nid_change_history_table", nid_change_history_table },
	{ L"nid_tombstone_table", nid_tombstone_table },
	{ L"nid_tombstone_date_table", nid_tombstone_date_table },
	{ L"nid_all_message_search_folder", nid_all_message_search_folder },
	{ L"nid_all_message_search_contents", nid_all_message_search_contents },
	{ L"nid_lrep_gmp", nid_lrep_gmp },
	{ L"nid_lrep_folders_smp", nid_lrep_folders_smp },
	{ L"nid_lrep_folders_table", nid_lrep_folders_table },
	{ L"nid_folder_path_tombstone_table", nid_folder_path_tombstone_table },
	{ L"nid_hst_hmp", nid_hst_hmp },
	{ L"nid_index_prv_pub_base", nid_index_prv_pub_base },
	{ L"nid_pub_root_folder", nid_pub_root_folder },
	{ L"nid_prv_root_folder", nid_prv_root_folder },
	{ L"nid_criterr_notification", nid_criterr_notification },
	{ L"nid_object_notification", nid_object_notification },
	{ L"nid_newemail_notification", nid_newemail_notification },
	{ L"nid_extended_notification", nid_extended_notification },
	{ L"nid_indexing_notification", nid_indexing_notification },

	// enum prop_type
	{ L"prop_type_unspecified", prop_type_unspecified },
	{ L"prop_type_null", prop_type_null },
	{ L"prop_type_short", prop_type_short },
	{ L"prop_type_mv_short", prop_type_mv_short },
	{ L"prop_type_long", prop_type_long },
	{ L"prop_type_mv_long", prop_type_mv_long },
	{ L"prop_type_float", prop_type_float },
	{ L"prop_type_mv_float", prop_type_mv_float },
	{ L"prop_type_double", prop_type_double },
	{ L"prop_type_mv_double", prop_type_mv_double },
	{ L"prop_type_currency", prop_type_currency },
	{ L"prop_type_mv_currency", prop_type_mv_currency },
	{ L"prop_type_apptime", prop_type_apptime },
	{ L"prop_type_mv_apptime", prop_type_mv_apptime },
	{ L"prop_type_error", prop_type_error },
	{ L"prop_type_boolean", prop_type_boolean },
	{ L"prop_type_object", prop_type_object },
	{ L"prop_type_longlong", prop_type_longlong },
	{ L"prop_type_mv_longlong", prop_type_mv_longlong },
	{ L"prop_type_string", prop_type_string },
	{ L"prop_type_mv_string", prop_type_mv_string },
	{ L"prop_type_wstring", prop_type_wstring },
	{ L"prop_type_mv_wstring", prop_type_mv_wstring },
	{ L"prop_type_systime", prop_type_systime },
	{ L"prop_type_mv_systime", prop_type_mv_systime },
	{ L"prop_type_guid", prop_type_guid },
	{ L"prop_type_mv_guid", prop_type_mv_guid },
	{ L"prop_type_binary", prop_type_binary },
	{ L"prop_type_mv_binary", prop_type_mv_binary },

	// enum recipient_type
	{ L"mapi_to", mapi_to },
	{ L"mapi_cc", mapi_cc },
	{ L"message_subject_prefix_lead_byte", message_subject_prefix_lead_byte },

	// struct guid
	{ L"offsetof(guid, data1)", offsetof(guid, data1) },
	{ L"offsetof(guid, data2)", offsetof(guid, data2) },
	{ L"offsetof(guid, data3)", offsetof(guid, data3) },
	{ L"sizeof(guid)", sizeof(guid) },

	// struct block_reference<T>
	{ L"offsetof(block_reference<ulonglong>, bid)", offsetof(block_reference<ulonglong>, bid) },
	{ L"offsetof(block_reference<ulong>, bid)", offsetof(block_reference<ulong>, bid) },
	{ L"offsetof(block_reference<ulonglong>, ib)", offsetof(block_reference<ulonglong>, ib) },
	{ L"offsetof(block_reference<ulong>, ib)", offsetof(block_reference<ulong>, ib) },
	{ L"sizeof(block_reference<ulonglong>)", sizeof(block_reference<ulonglong>) },
	{ L"sizeof(block_reference<ulong>)", sizeof(block_reference<ulong>) },
	{ L"header_fmap_entries", header_fmap_entries },
	{ L"header_fpmap_size", header_fpmap_size },
	{ L"header_lock_entries", header_lock_entries },

	// enum database_format
	{ L"database_format_ansi_min", database_format_ansi_min },
	{ L"database_format_ansi", database_format_ansi },
	{ L"database_format_unicode_min", database_format_unicode_min },
	{ L"database_format_unicode", database_format_unicode },

	// enum database_type
	{ L"database_ost", database_ost },
	{ L"database_pst", database_pst },
	{ L"pst_magic", pst_magic },
	{ L"ost_magic", ost_magic },

	// enum crypt_method
	{ L"crypt_method_none", crypt_method_none },
	{ L"crypt_method_permute", crypt_method_permute },
	{ L"crypt_method_cyclic", crypt_method_cyclic },

	// struct root<T>
	{ L"offsetof(root<ulonglong>, cOrphans)", offsetof(root<ulonglong>, cOrphans) },
	{ L"offsetof(root<ulong>, cOrphans)", offsetof(root<ulong>, cOrphans) },
	{ L"offsetof(root<ulonglong>, ibFileEof)", offsetof(root<ulonglong>, ibFileEof) },
	{ L"offsetof(root<ulong>, ibFileEof)", offsetof(root<ulong>, ibFileEof) },
	{ L"offsetof(root<ulonglong>, ibAMapLast)", offsetof(root<ulonglong>, ibAMapLast) },
	{ L"offsetof(root<ulong>, ibAMapLast)", offsetof(root<ulong>, ibAMapLast) },
	{ L"offsetof(root<ulonglong>, cbAMapFree)", offsetof(root<ulonglong>, cbAMapFree) },
	{ L"offsetof(root<ulong>, cbAMapFree)", offsetof(root<ulong>, cbAMapFree) },
	{ L"offsetof(root<ulonglong>, cbPMapFree)", offsetof(root<ulonglong>, cbPMapFree) },
	{ L"offsetof(root<ulong>, cbPMapFree)", offsetof(root<ulong>, cbPMapFree) },
	{ L"offsetof(root<ulonglong>, brefNBT)", offsetof(root<ulonglong>, brefNBT) },
	{ L"offsetof(root<ulong>, brefNBT)", offsetof(root<ulong>, brefNBT) },
	{ L"offsetof(root<ulonglong>, brefBBT)", offsetof(root<ulonglong>, brefBBT) },
	{ L"offsetof(root<ulong>, brefBBT)", offsetof(root<ulong>, brefBBT) },
	{ L"offsetof(root<ulonglong>, fAMapValid)", offsetof(root<ulonglong>, fAMapValid) },
	{ L"offsetof(root<ulong>, fAMapValid)", offsetof(root<ulong>, fAMapValid) },
	{ L"offsetof(root<ulonglong>, bARVec)", offsetof(root<ulonglong>, bARVec) },
	{ L"offsetof(root<ulong>, bARVec)", offsetof(root<ulong>, bARVec) },
	{ L"offsetof(root<ulonglong>, cARVec)", offsetof(root<ulonglong>, cARVec) },
	{ L"offsetof(root<ulong>, cARVec)", offsetof(root<ulong>, cARVec) },
	{ L"sizeof(root<ulonglong>)", sizeof(root<ulonglong>) },
	{ L"sizeof(root<ulong>)", sizeof(root<ulong>) },
	{ L"hlmagic", hlmagic },

	// struct header<T>

	// struct header<ulonglong>
	{ L"offsetof(header<ulonglong>, dwMagic)", offsetof(header<ulonglong>, dwMagic) },
	{ L"offsetof(header<ulonglong>, dwCRCPartial)", offsetof(header<ulonglong>, dwCRCPartial) },
	{ L"offsetof(header<ulonglong>, wMagicClient)", offsetof(header<ulonglong>, wMagicClient) },
	{ L"offsetof(header<ulonglong>, wVer)", offsetof(header<ulonglong>, wVer) },
	{ L"offsetof(header<ulonglong>, wVerClient)", offsetof(header<ulonglong>, wVerClient) },
	{ L"offsetof(header<ulonglong>, bPlatformCreate)", offsetof(header<ulonglong>, bPlatformCreate) },
	{ L"offsetof(header<ulonglong>, bPlatformAccess)", offsetof(header<ulonglong>, bPlatformAccess) },
	{ L"offsetof(header<ulonglong>, dwOpenDBID)", offsetof(header<ulonglong>, dwOpenDBID) },
	{ L"offsetof(header<ulonglong>, dwOpenClaimID)", offsetof(header<ulonglong>, dwOpenClaimID) },
	{ L"offsetof(header<ulonglong>, bidUnused)", offsetof(header<ulonglong>, bidUnused) },
	{ L"offsetof(header<ulonglong>, bidNextP)", offsetof(header<ulonglong>, bidNextP) },
	{ L"offsetof(header<ulonglong>, dwUnique)", offsetof(header<ulonglong>, dwUnique) },
	{ L"offsetof(header<ulonglong>, root_info)", offsetof(header<ulonglong>, root_info) },
	{ L"offsetof(header<ulonglong>, bSentinel)", offsetof(header<ulonglong>, bSentinel) },
	{ L"offsetof(header<ulonglong>, bCryptMethod)", offsetof(header<ulonglong>, bCryptMethod) },
	{ L"offsetof(header<ulonglong>, bidNextB)", offsetof(header<ulonglong>, bidNextB) },
	{ L"offsetof(header<ulonglong>, dwCRCFull)", offsetof(header<ulonglong>, dwCRCFull) },
	{ L"offsetof(header<ulonglong>, bLockSemaphore)", offsetof(header<ulonglong>, bLockSemaphore) },
	{ L"sizeof(header<ulonglong>)", sizeof(header<ulonglong>) },

	// struct header<ulong>
	{ L"offsetof(header<ulong>, dwMagic)", offsetof(header<ulong>, dwMagic) },
	{ L"offsetof(header<ulong>, dwCRCPartial)", offsetof(header<ulong>, dwCRCPartial) },
	{ L"offsetof(header<ulong>, wMagicClient)", offsetof(header<ulong>, wMagicClient) },
	{ L"offsetof(header<ulong>, wVer)", offsetof(header<ulong>, wVer) },
	{ L"offsetof(header<ulong>, wVerClient)", offsetof(header<ulong>, wVerClient) },
	{ L"offsetof(header<ulong>, bPlatformCreate)", offsetof(header<ulong>, bPlatformCreate) },
	{ L"offsetof(header<ulong>, bPlatformAccess)", offsetof(header<ulong>, bPlatformAccess) },
	{ L"offsetof(header<ulong>, dwOpenDBID)", offsetof(header<ulong>, dwOpenDBID) },
	{ L"offsetof(header<ulong>, dwOpenClaimID)", offsetof(header<ulong>, dwOpenClaimID) },
	{ L"offsetof(header<ulong>, bidNextB)", offsetof(header<ulong>, bidNextB) },
	{ L"offsetof(header<ulong>, bidNextP)", offsetof(header<ulong>, bidNextP) },
	{ L"offsetof(header<ulong>, dwUnique)", offsetof(header<ulong>, dwUnique) },
	{ L"offsetof(header<ulong>, root_info)", offsetof(header<ulong>, root_info) },
	{ L"offsetof(header<ulong>, bSentinel)", offsetof(header<ulong>, bSentinel) },
	{ L"offsetof(header<ulong>, bCryptMethod)", offsetof(header<ulong>, bCryptMethod) },
	{ L"offsetof(header<ulong>, ullReserved)", offsetof(header<ulong>, ullReserved) },
	{ L"offsetof(header<ulong>, dwReserved)", offsetof(header<ulong>, dwReserved) },
	{ L"offsetof(header<ulong>, bLockSemaphore)", offsetof(header<ulong>, bLockSemaphore) },
	{ L"sizeof(header<ulong>)", sizeof(header<ulong>) },

	// struct header_crc_locations<T>

	// struct header_crc_locations<ulong>
	{ L"header_crc_locations<ulong>::start", header_crc_locations<ulong>::start },
	{ L"header_crc_locations<ulong>::end", header_crc_locations<ulong>::end },
	{ L"header_crc_locations<ulong>::length", header_crc_locations<ulong>::length },

	// struct header_crc_locations<ulonglong>
	{ L"header_crc_locations<ulonglong>::partial_start", header_crc_locations<ulonglong>::partial_start },
	{ L"header_crc_locations<ulonglong>::partial_end", header_crc_locations<ulonglong>::partial_end },
	{ L"header_crc_locations<ulonglong>::partial_length", header_crc_locations<ulonglong>::partial_length },
	{ L"header_crc_locations<ulonglong>::full_start", header_crc_locations<ulonglong>::full_start },
	{ L"header_crc_locations<ulonglong>::full_end", header_crc_locations<ulonglong>::full_end },
	{ L"header_crc_locations<ulonglong>::full_length", header_crc_locations<ulonglong>::full_length },
	{ L"page_size", page_size },

	// enum page_type
	{ L"page_type_bbt", page_type_bbt },
	{ L"page_type_nbt", page_type_nbt },
	{ L"page_type_fmap", page_type_fmap },
	{ L"page_type_pmap", page_type_pmap },
	{ L"page_type_amap", page_type_amap },
	{ L"page_type_fpmap", page_type_fpmap },

	// struct page_trailer<T>

	// struct page_trailer<ulonglong>
	{ L"offsetof(page_trailer<ulonglong>, page_type)", offsetof(page_trailer<ulonglong>, page_type) },
	{ L"offsetof(page_trailer<ulonglong>, page_type_repeat)", offsetof(page_trailer<ulonglong>, page_type_repeat) },
	{ L"offsetof(page_trailer<ulonglong>, signature)", offsetof(page_trailer<ulonglong>, signature) },
	{ L"offsetof(page_trailer<ulonglong>, crc)", offsetof(page_trailer<ulonglong>, crc) },
	{ L"offsetof(page_trailer<ulonglong>, bid)", offsetof(page_trailer<ulonglong>, bid) },
	{ L"sizeof(page_trailer<ulonglong>)", sizeof(page_trailer<ulonglong>) },

	// struct page_trailer<ulong>
	{ L"offsetof(page_trailer<ulong>, page_type)", offsetof(page_trailer<ulong>, page_type) },
	{ L"offsetof(page_trailer<ulong>, page_type_repeat)", offsetof(page_trailer<ulong>, page_type_repeat) },
	{ L"offsetof(page_trailer<ulong>, signature)", offsetof(page_trailer<ulong>, signature) },
	{ L"offsetof(page_trailer<ulong>, bid)", offsetof(page_trailer<ulong>, bid) },
	{ L"offsetof(page_trailer<ulong>, crc)", offsetof(page_trailer<ulong>, crc) },
	{ L"sizeof(page_trailer<ulong>)", sizeof(page_trailer<ulong>) },

	// struct page<T>
	{ L"page<ulonglong>::page_data_size", page<ulonglong>::page_data_size },
	{ L"page<ulong>::page_data_size", page<ulong>::page_data_size },
	{ L"offsetof(page<ulonglong>, trailer)", offsetof(page<ulonglong>, trailer) },
	{ L"offsetof(page<ulong>, trailer)", offsetof(page<ulong>, trailer) },
	{ L"sizeof(page<ulonglong>)", sizeof(page<ulonglong>) },
	{ L"sizeof(page<ulong>)", sizeof(page<ulong>) },
	{ L"bytes_per_slot", bytes_per_slot },
	{ L"first_amap_page_location", first_amap_page_location },

	// struct amap_page<T>

	// struct pmap_page<T>

	// struct fmap_page<T>

	// struct fpmap_page<T>
	{ L"dlist_page_location", dlist_page_location },

	// struct dlist_page<T>
	{ L"dlist_page<ulonglong>::extra_space", dlist_page<ulonglong>::extra_space },
	{ L"dlist_page<ulong>::extra_space", dlist_page<ulong>::extra_space },
	{ L"dlist_page<ulonglong>::max_entries", dlist_page<ulonglong>::max_entries },
	{ L"dlist_page<ulong>::max_entries", dlist_page<ulong>::max_entries },
	{ L"offsetof(dlist_page<ulonglong>, flags)", offsetof(dlist_page<ulonglong>, flags) },
	{ L"offsetof(dlist_page<ulong>, flags)", offsetof(dlist_page<ulong>, flags) },
	{ L"offsetof(dlist_page<ulonglong>, num_entries)", offsetof(dlist_page<ulonglong>, num_entries) },
	{ L"offsetof(dlist_page<ulong>, num_entries)", offsetof(dlist_page<ulong>, num_entries) },
	{ L"offsetof(dlist_page<ulonglong>, current_page)", offsetof(dlist_page<ulonglong>, current_page) },
	{ L"offsetof(dlist_page<ulong>, current_page)", offsetof(dlist_page<ulong>, current_page) },
	{ L"offsetof(dlist_page<ulonglong>, backfill_location)", offsetof(dlist_page<ulonglong>, backfill_location) },
	{ L"offsetof(dlist_page<ulong>, backfill_location)", offsetof(dlist_page<ulong>, backfill_location) },
	{ L"offsetof(dlist_page<ulonglong>, trailer)", offsetof(dlist_page<ulonglong>, trailer) },
	{ L"offsetof(dlist_page<ulong>, trailer)", offsetof(dlist_page<ulong>, trailer) },
	{ L"sizeof(dlist_page<ulonglong>)", sizeof(dlist_page<ulonglong>) },
	{ L"sizeof(dlist_page<ulong>)", sizeof(dlist_page<ulong>) },
	{ L"dlist_page_num_mask", dlist_page_num_mask },
	{ L"dlist_slots_shift", dlist_slots_shift },

	// struct bt_entry<T>
	{ L"offsetof(bt_entry<ulonglong>, key)", offsetof(bt_entry<ulonglong>, key) },
	{ L"offsetof(bt_entry<ulong>, key)", offsetof(bt_entry<ulong>, key) },
	{ L"offsetof(bt_entry<ulonglong>, ref)", offsetof(bt_entry<ulonglong>, ref) },
	{ L"offsetof(bt_entry<ulong>, ref)", offsetof(bt_entry<ulong>, ref) },
	{ L"sizeof(bt_entry<ulonglong>)", sizeof(bt_entry<ulonglong>) },
	{ L"sizeof(bt_entry<ulong>)", sizeof(bt_entry<ulong>) },

	// struct nbt_leaf_entry<T>
	{ L"offsetof(nbt_leaf_entry<ulonglong>, nid)", offsetof(nbt_leaf_entry<ulonglong>, nid) },
	{ L"offsetof(nbt_leaf_entry<ulong>, nid)", offsetof(nbt_leaf_entry<ulong>, nid) },
	{ L"offsetof(nbt_leaf_entry<ulonglong>, data)", offsetof(nbt_leaf_entry<ulonglong>, data) },
	{ L"offsetof(nbt_leaf_entry<ulong>, data)", offsetof(nbt_leaf_entry<ulong>, data) },
	{ L"offsetof(nbt_leaf_entry<ulonglong>, sub)", offsetof(nbt_leaf_entry<ulonglong>, sub) },
	{ L"offsetof(nbt_leaf_entry<ulong>, sub)", offsetof(nbt_leaf_entry<ulong>, sub) },
	{ L"offsetof(nbt_leaf_entry<ulonglong>, parent_nid)", offsetof(nbt_leaf_entry<ulonglong>, parent_nid) },
	{ L"offsetof(nbt_leaf_entry<ulong>, parent_nid)", offsetof(nbt_leaf_entry<ulong>, parent_nid) },
	{ L"sizeof(nbt_leaf_entry<ulonglong>)", sizeof(nbt_leaf_entry<ulonglong>) },
	{ L"sizeof(nbt_leaf_entry<ulong>)", sizeof(nbt_leaf_entry<ulong>) },

	// struct bbt_leaf_entry<T>
	{ L"offsetof(bbt_leaf_entry<ulonglong>, ref)", offsetof(bbt_leaf_entry<ulonglong>, ref) },
	{ L"offsetof(bbt_leaf_entry<ulong>, ref)", offsetof(bbt_leaf_entry<ulong>, ref) },
	{ L"offsetof(bbt_leaf_entry<ulonglong>, size)", offsetof(bbt_leaf_entry<ulonglong>, size) },
	{ L"offsetof(bbt_leaf_entry<ulong>, size)", offsetof(bbt_leaf_entry<ulong>, size) },
	{ L"offsetof(bbt_leaf_entry<ulonglong>, ref_count)", offsetof(bbt_leaf_entry<ulonglong>, ref_count) },
	{ L"offsetof(bbt_leaf_entry<ulong>, ref_count)", offsetof(bbt_leaf_entry<ulong>, ref_count) },
	{ L"sizeof(bbt_leaf_entry<ulonglong>)", sizeof(bbt_leaf_entry<ulonglong>) },
	{ L"sizeof(bbt_leaf_entry<ulong>)", sizeof(bbt_leaf_entry<ulong>) },

	// struct nbt_nonleaf_page<T>

	// struct bbt_nonleaf_page<T>

	// struct nbt_leaf_page<T>

	// struct bbt_leaf_page<T>
	{ L"max_block_disk_size", max_block_disk_size },

	// enum block_types
	{ L"block_type_external", block_type_external },
	{ L"block_type_extended", block_type_extended },
	{ L"block_id_attached_bit", block_id_attached_bit },
	{ L"block_id_internal_bit", block_id_internal_bit },
	{ L"block_id_increment", block_id_increment },

	// struct block_trailer<T>

	// struct block_trailer<ulonglong>
	{ L"offsetof(block_trailer<ulonglong>, cb)", offsetof(block_trailer<ulonglong>, cb) },
	{ L"offsetof(block_trailer<ulonglong>, signature)", offsetof(block_trailer<ulonglong>, signature) },
	{ L"offsetof(block_trailer<ulonglong>, crc)", offsetof(block_trailer<ulonglong>, crc) },
	{ L"offsetof(block_trailer<ulonglong>, bid)", offsetof(block_trailer<ulonglong>, bid) },
	{ L"sizeof(block_trailer<ulonglong>)", sizeof(block_trailer<ulonglong>) },

	// struct block_trailer<ulong>
	{ L"offsetof(block_trailer<ulong>, cb)", offsetof(block_trailer<ulong>, cb) },
	{ L"offsetof(block_trailer<ulong>, signature)", offsetof(block_trailer<ulong>, signature) },
	{ L"offsetof(block_trailer<ulong>, bid)", offsetof(block_trailer<ulong>, bid) },
	{ L"offsetof(block_trailer<ulong>, crc)", offsetof(block_trailer<ulong>, crc) },
	{ L"sizeof(block_trailer<ulong>)", sizeof(block_trailer<ulong>) },

	// struct external_block<T>
	{ L"external_block<ulonglong>::max_size", external_block<ulonglong>::max_size },
	{ L"external_block<ulong>::max_size", external_block<ulong>::max_size },

	// struct extended_block<T>

	// struct extended_block<ulonglong>
	{ L"extended_block<ulonglong>::max_count", extended_block<ulonglong>::max_count },
	{ L"extended_block<ulonglong>::max_size", extended_block<ulonglong>::max_size },
	{ L"offsetof(extended_block<ulonglong>, block_type)", offsetof(extended_block<ulonglong>, block_type) },
	{ L"offsetof(extended_block<ulonglong>, level)", offsetof(extended_block<ulonglong>, level) },
	{ L"offsetof(extended_block<ulonglong>, count)", offsetof(extended_block<ulonglong>, count) },
	{ L"offsetof(extended_block<ulonglong>, total_size)", offsetof(extended_block<ulonglong>, total_size) },
	{ L"sizeof(extended_block<ulonglong>)", sizeof(extended_block<ulonglong>) },

	// struct extended_block<ulong>
	{ L"extended_block<ulong>::max_count", extended_block<ulong>::max_count },
	{ L"extended_block<ulong>::max_size", extended_block<ulong>::max_size },
	{ L"offsetof(extended_block<ulong>, block_type)", offsetof(extended_block<ulong>, block_type) },
	{ L"offsetof(extended_block<ulong>, level)", offsetof(extended_block<ulong>, level) },
	{ L"offsetof(extended_block<ulong>, count)", offsetof(extended_block<ulong>, count) },
	{ L"offsetof(extended_block<ulong>, total_size)", offsetof(extended_block<ulong>, total_size) },
	{ L"sizeof(extended_block<ulong>)", sizeof(extended_block<ulong>) },

	// struct sub_leaf_entry<T>
	{ L"offsetof(sub_leaf_entry<ulonglong>, nid)", offsetof(sub_leaf_entry<ulonglong>, nid) },
	{ L"offsetof(sub_leaf_entry<ulong>, nid)", offsetof(sub_leaf_entry<ulong>, nid) },
	{ L"offsetof(sub_leaf_entry<ulonglong>, data)", offsetof(sub_leaf_entry<ulonglong>, data) },
	{ L"offsetof(sub_leaf_entry<ulong>, data)", offsetof(sub_leaf_entry<ulong>, data) },
	{ L"offsetof(sub_leaf_entry<ulonglong>, sub)", offsetof(sub_leaf_entry<ulonglong>, sub) },
	{ L"offsetof(sub_leaf_entry<ulong>, sub)", offsetof(sub_leaf_entry<ulong>, sub) },
	{ L"sizeof(sub_leaf_entry<ulonglong>)", sizeof(sub_leaf_entry<ulonglong>) },
	{ L"sizeof(sub_leaf_entry<ulong>)", sizeof(sub_leaf_entry<ulong>) },

	// struct sub_nonleaf_entry<T>
	{ L"offsetof(sub_nonleaf_entry<ulonglong>, nid_key)", offsetof(sub_nonleaf_entry<ulonglong>, nid_key) },
	{ L"offsetof(sub_nonleaf_entry<ulong>, nid_key)", offsetof(sub_nonleaf_entry<ulong>, nid_key) },
	{ L"offsetof(sub_nonleaf_entry<ulonglong>, sub_block_bid)", offsetof(sub_nonleaf_entry<ulonglong>, sub_block_bid) },
	{ L"offsetof(sub_nonleaf_entry<ulong>, sub_block_bid)", offsetof(sub_nonleaf_entry<ulong>, sub_block_bid) },
	{ L"sizeof(sub_nonleaf_entry<ulonglong>)", sizeof(sub_nonleaf_entry<ulonglong>) },
	{ L"sizeof(sub_nonleaf_entry<ulong>)", sizeof(sub_nonleaf_entry<ulong>) },

	// struct sub_nonleaf_block<T>

	// struct sub_leaf_block<T>
	{ L"heap_signature", heap_signature },
	{ L"heap_max_alloc_size", heap_max_alloc_size },
	{ L"heap_max_alloc_size_wver_14", heap_max_alloc_size_wver_14 },

	// enum heap_client_signature
	{ L"heap_sig_gmp", heap_sig_gmp },
	{ L"heap_sig_tc", heap_sig_tc },
	{ L"heap_sig_smp", heap_sig_smp },
	{ L"heap_sig_hmp", heap_sig_hmp },
	{ L"heap_sig_ch", heap_sig_ch },
	{ L"heap_sig_chtc", heap_sig_chtc },
	{ L"heap_sig_bth", heap_sig_bth },
	{ L"heap_sig_pc", heap_sig_pc },

	// enum heap_fill_level
	{ L"heap_fill_empty", heap_fill_empty },
	{ L"heap_fill_1", heap_fill_1 },
	{ L"heap_fill_2", heap_fill_2 },
	{ L"heap_fill_3", heap_fill_3 },
	{ L"heap_fill_4", heap_fill_4 },
	{ L"heap_fill_5", heap_fill_5 },
	{ L"heap_fill_6", heap_fill_6 },
	{ L"heap_fill_7", heap_fill_7 },
	{ L"heap_fill_8", heap_fill_8 },
	{ L"heap_fill_9", heap_fill_9 },
	{ L"heap_fill_10", heap_fill_10 },
	{ L"heap_fill_11", heap_fill_11 },
	{ L"heap_fill_12", heap_fill_12 },
	{ L"heap_fill_13", heap_fill_13 },
	{ L"heap_fill_14", heap_fill_14 },

	// struct heap_first_header
	{ L"heap_first_header::fill_level_size", heap_first_header::fill_level_size },
	{ L"offsetof(heap_first_header, page_map_offset)", offsetof(heap_first_header, page_map_offset) },
	{ L"offsetof(heap_first_header, signature)", offsetof(heap_first_header, signature) },
	{ L"offsetof(heap_first_header, client_signature)", offsetof(heap_first_header, client_signature) },
	{ L"offsetof(heap_first_header, root_id)", offsetof(heap_first_header, root_id) },
	{ L"sizeof(heap_first_header)", sizeof(heap_first_header) },

	// struct heap_page_header
	{ L"offsetof(heap_page_header, page_map_offset)", offsetof(heap_page_header, page_map_offset) },
	{ L"sizeof(heap_page_header)", sizeof(heap_page_header) },

	// struct heap_page_fill_header
	{ L"heap_page_fill_header::fill_level_size", heap_page_fill_header::fill_level_size },
	{ L"offsetof(heap_page_fill_header, page_map_offset)", offsetof(heap_page_fill_header, page_map_offset) },
	{ L"sizeof(heap_page_fill_header)", sizeof(heap_page_fill_header) },

	// struct heap_page_map
	{ L"offsetof(heap_page_map, num_allocs)", offsetof(heap_page_map, num_allocs) },
	{ L"offsetof(heap_page_map, num_frees)", offsetof(heap_page_map, num_frees) },
	{ L"sizeof(heap_page_map)", sizeof(heap_page_map) },

	// struct bth_header
	{ L"offsetof(bth_header, bth_signature)", offsetof(bth_header, bth_signature) },
	{ L"offsetof(bth_header, key_size)", offsetof(bth_header, key_size) },
	{ L"offsetof(bth_header, entry_size)", offsetof(bth_header, entry_size) },
	{ L"offsetof(bth_header, num_levels)", offsetof(bth_header, num_levels) },
	{ L"offsetof(bth_header, root)", offsetof(bth_header, root) },
	{ L"sizeof(bth_header)", sizeof(bth_header) },

	// struct prop_entry
	{ L"offsetof(prop_entry, type)", offsetof(prop_entry, type) },
	{ L"offsetof(prop_entry, id)", offsetof(prop_entry, id) },
	{ L"sizeof(prop_entry)", sizeof(prop_entry) },

	// struct sub_object
	{ L"offsetof(sub_object, nid)", offsetof(sub_object, nid) },
	{ L"offsetof(sub_object, size)", offsetof(sub_object, size) },
	{ L"sizeof(sub_object)", sizeof(sub_object) },

	// struct mv_toc
	{ L"offsetof(mv_toc, count)", offsetof(mv_toc, count) },
	{ L"sizeof(mv_toc)", sizeof(mv_toc) },

	// enum tc_offsets
	{ L"tc_offsets_four", tc_offsets_four },
	{ L"tc_offsets_two", tc_offsets_two },
	{ L"tc_offsets_one", tc_offsets_one },
	{ L"tc_offsets_bitmap", tc_offsets_bitmap },

	// struct column_description
	{ L"offsetof(column_description, type)", offsetof(column_description, type) },
	{ L"offsetof(column_description, id)", offsetof(column_description, id) },
	{ L"offsetof(column_description, offset)", offsetof(column_description, offset) },
	{ L"offsetof(column_description, size)", offsetof(column_description, size) },
	{ L"offsetof(column_description, bit_offset)", offsetof(column_description, bit_offset) },
	{ L"sizeof(column_description)", sizeof(column_description) },

	// struct gust_column_description
	{ L"offsetof(gust_column_description, type)", offsetof(gust_column_description, type) },
	{ L"offsetof(gust_column_description, id)", offsetof(gust_column_description, id) },
	{ L"offsetof(gust_column_description, offset)", offsetof(gust_column_description, offset) },
	{ L"offsetof(gust_column_description, size)", offsetof(gust_column_description, size) },
	{ L"offsetof(gust_column_description, unused1)", offsetof(gust_column_description, unused1) },
	{ L"offsetof(gust_column_description, bit_offset)", offsetof(gust_column_description, bit_offset) },
	{ L"offsetof(gust_column_description, unused2)", offsetof(gust_column_description, unused2) },
	{ L"offsetof(gust_column_description, data_subnode)", offsetof(gust_column_description, data_subnode) },
	{ L"sizeof(gust_column_description)", sizeof(gust_column_description) },

	// struct tc_header
	{ L"offsetof(tc_header, signature)", offsetof(tc_header, signature) },
	{ L"offsetof(tc_header, num_columns)", offsetof(tc_header, num_columns) },
	{ L"offsetof(tc_header, row_btree_id)", offsetof(tc_header, row_btree_id) },
	{ L"offsetof(tc_header, row_matrix_id)", offsetof(tc_header, row_matrix_id) },
	{ L"sizeof(tc_header)", sizeof(tc_header) },

	// struct gust_header
	{ L"offsetof(gust_header, signature)", offsetof(gust_header, signature) },
	{ L"offsetof(gust_header, unused1)", offsetof(gust_header, unused1) },
	{ L"offsetof(gust_header, row_btree_id)", offsetof(gust_header, row_btree_id) },
	{ L"offsetof(gust_header, row_matrix_id)", offsetof(gust_header, row_matrix_id) },
	{ L"offsetof(gust_header, num_columns)", offsetof(gust_header, num_columns) },
	{ L"offsetof(gust_header, column_subnode)", offsetof(gust_header, column_subnode) },
	{ L"offsetof(gust_header, unused3)", offsetof(gust_header, unused3) },
	{ L"offsetof(gust_header, unused4)", offsetof(gust_header, unused4) },
	{ L"sizeof(gust_header)", sizeof(gust_header) },

	// struct nameid
	{ L"offsetof(nameid, id)", offsetof(nameid, id) },
	{ L"offsetof(nameid, string_offset)", offsetof(nameid, string_offset) },
	{ L"offsetof(nameid, index)", offsetof(nameid, index) },
	{ L"sizeof(nameid)", sizeof(nameid) },

	// struct nameid_hash_entry
	{ L"offsetof(nameid_hash_entry, hash_base)", offsetof(nameid_hash_entry, hash_base) },
	{ L"offsetof(nameid_hash_entry, index)", offsetof(nameid_hash_entry, index) },
	{ L"sizeof(nameid_hash_entry)", sizeof(nameid_hash_entry) },
};