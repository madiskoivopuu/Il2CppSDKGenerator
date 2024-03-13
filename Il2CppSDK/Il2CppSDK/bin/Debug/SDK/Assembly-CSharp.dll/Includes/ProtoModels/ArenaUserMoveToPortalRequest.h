#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserMoveToPortalRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserMoveToPortalRequest"));
	}

	template <typename T = MessageParser1ArenaUserMoveToPortalRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PveTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& pveTag_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ExitTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& exitTag_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& OwnerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ownerID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& InventoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaUserInventoryData*> T& inventory_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LocationNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& locationName_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& PortalInfoDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CoordinatorPortalInfoData*> T& portalInfoData_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& PortalWithoutParentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& portalWithoutParent_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& PortalByInviteFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& portalByInvite_() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = int32_t> static T& BackIncomeTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& backIncomeTag_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& ToMapSlotOnGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& toMapSlotOnGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = MessageParser1ArenaUserMoveToPortalRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2860BB4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2860C18))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860D38))(this);
	}
	template <typename T = ArenaUserMoveToPortalRequest*> T Clone() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F18))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F74))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2860F7C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F84))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2860F8C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PveTag() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2860F94))(this);
	}
	template <typename T = void> T set_PveTag(Il2CppString* value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x2860F9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExitTag() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286101C))(this);
	}
	template <typename T = void> T set_ExitTag(Il2CppString* value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x2861024))(this, value);
	}
	template <typename T = int64_t> T get_OwnerID() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28610A4))(this);
	}
	template <typename T = void> T set_OwnerID(int64_t value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x28610AC))(this, value);
	}
	template <typename T = ArenaUserInventoryData*> T get_Inventory() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28610B4))(this);
	}
	template <typename T = void> T set_Inventory(ArenaUserInventoryData* value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, ArenaUserInventoryData*))(Il2CppBase() + 0x28610BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocationName() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28610C4))(this);
	}
	template <typename T = void> T set_LocationName(Il2CppString* value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x28610CC))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286114C))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2861154))(this, value);
	}
	template <typename T = CoordinatorPortalInfoData*> T get_PortalInfoData() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286115C))(this);
	}
	template <typename T = void> T set_PortalInfoData(CoordinatorPortalInfoData* value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, CoordinatorPortalInfoData*))(Il2CppBase() + 0x2861164))(this, value);
	}
	template <typename T = bool> T get_PortalWithoutParent() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286116C))(this);
	}
	template <typename T = void> T set_PortalWithoutParent(bool value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, bool))(Il2CppBase() + 0x2861174))(this, value);
	}
	template <typename T = bool> T get_PortalByInvite() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861180))(this);
	}
	template <typename T = void> T set_PortalByInvite(bool value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, bool))(Il2CppBase() + 0x2861188))(this, value);
	}
	template <typename T = Il2CppString*> T get_BackIncomeTag() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861194))(this);
	}
	template <typename T = void> T set_BackIncomeTag(Il2CppString* value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, Il2CppString*))(Il2CppBase() + 0x286119C))(this, value);
	}
	template <typename T = int64_t> T get_ToMapSlotOnGlobalMap() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286121C))(this);
	}
	template <typename T = void> T set_ToMapSlotOnGlobalMap(int64_t value) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, int64_t))(Il2CppBase() + 0x2861224))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, Il2CppObject*))(Il2CppBase() + 0x286122C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserMoveToPortalRequest* other) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x286129C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x28613E0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861598))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, uintptr_t))(Il2CppBase() + 0x28615FC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861884))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserMoveToPortalRequest* other) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, ArenaUserMoveToPortalRequest*))(Il2CppBase() + 0x2861BA8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserMoveToPortalRequest*, uintptr_t))(Il2CppBase() + 0x2861D58))(this, input);
	}

};

}
