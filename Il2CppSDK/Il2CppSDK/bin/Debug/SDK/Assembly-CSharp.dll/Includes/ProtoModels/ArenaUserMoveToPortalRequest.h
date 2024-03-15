#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserMoveToPortalRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserMoveToPortalRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUserMoveToPortalRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserMoveToPortalRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PveTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& pveTag_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ExitTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& exitTag_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& OwnerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ownerID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& InventoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R& inventory_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LocationNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& locationName_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& PortalInfoDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CoordinatorPortalInfoData*> R& portalInfoData_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& PortalWithoutParentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& portalWithoutParent_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& PortalByInviteFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& portalByInvite_() {
		return *(R*)((uintptr_t)this + 0x59);
	}
	template <typename R = int32_t> static R& BackIncomeTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& backIncomeTag_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& ToMapSlotOnGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& toMapSlotOnGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	 static MessageParser1<ProtoModels::ArenaUserMoveToPortalRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserMoveToPortalRequest*>* (*)(void *))(Il2CppBase() + 0x2860BB4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2860C18))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860D38))(this);
	}
	template <typename R = ProtoModels::ArenaUserMoveToPortalRequest*> R Clone() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F18))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F74))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2860F7C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F84))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2860F8C))(this, value);
	}
	template <typename R = Il2CppString*> R get_PveTag() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F94))(this);
	}
	template <typename R = void> R set_PveTag(Il2CppString* value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x2860F9C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ExitTag() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286101C))(this);
	}
	template <typename R = void> R set_ExitTag(Il2CppString* value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x2861024))(this, value);
	}
	template <typename R = int64_t> R get_OwnerID() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28610A4))(this);
	}
	template <typename R = void> R set_OwnerID(int64_t value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x28610AC))(this, value);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R get_Inventory() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28610B4))(this);
	}
	template <typename R = void> R set_Inventory(ProtoModels::ArenaUserInventoryData* value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x28610BC))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocationName() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28610C4))(this);
	}
	template <typename R = void> R set_LocationName(Il2CppString* value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x28610CC))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286114C))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2861154))(this, value);
	}
	template <typename R = ProtoModels::CoordinatorPortalInfoData*> R get_PortalInfoData() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286115C))(this);
	}
	template <typename R = void> R set_PortalInfoData(ProtoModels::CoordinatorPortalInfoData* value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, ProtoModels::CoordinatorPortalInfoData*))(Il2CppBase() + 0x2861164))(this, value);
	}
	template <typename R = bool> R get_PortalWithoutParent() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286116C))(this);
	}
	template <typename R = void> R set_PortalWithoutParent(bool value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, bool))(Il2CppBase() + 0x2861174))(this, value);
	}
	template <typename R = bool> R get_PortalByInvite() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861180))(this);
	}
	template <typename R = void> R set_PortalByInvite(bool value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, bool))(Il2CppBase() + 0x2861188))(this, value);
	}
	template <typename R = Il2CppString*> R get_BackIncomeTag() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861194))(this);
	}
	template <typename R = void> R set_BackIncomeTag(Il2CppString* value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x286119C))(this, value);
	}
	template <typename R = int64_t> R get_ToMapSlotOnGlobalMap() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286121C))(this);
	}
	template <typename R = void> R set_ToMapSlotOnGlobalMap(int64_t value) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2861224))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, Il2CppObject*))(Il2CppBase() + 0x286122C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserMoveToPortalRequest* other) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, ProtoModels::ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286129C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28613E0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861598))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, uintptr_t))(Il2CppBase() + 0x28615FC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861884))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserMoveToPortalRequest* other) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, ProtoModels::ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861BA8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserMoveToPortalRequest*, uintptr_t))(Il2CppBase() + 0x2861D58))(this, input);
	}

};

}
