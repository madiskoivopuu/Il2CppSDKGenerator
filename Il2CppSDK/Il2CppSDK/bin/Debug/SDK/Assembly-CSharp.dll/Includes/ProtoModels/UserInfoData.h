#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserInfoData"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ClanIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanId_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& OnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& online_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LastLoginFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastLogin_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& CellIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellId_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246C5F4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246C658))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C778))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C8B8))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C914))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(UserInfoData*, int64_t))(Il2CppBase() + 0x246C91C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C924))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(UserInfoData*, Il2CppString*))(Il2CppBase() + 0x246C92C))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C9AC))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(UserInfoData*, int32_t))(Il2CppBase() + 0x246C9B4))(this, value);
	}
	template <typename T = int64_t> T get_ClanId() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C9BC))(this);
	}
	template <typename T = void> T set_ClanId(int64_t value) {
		return ((T (*)(UserInfoData*, int64_t))(Il2CppBase() + 0x246C9C4))(this, value);
	}
	template <typename T = bool> T get_Online() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C9CC))(this);
	}
	template <typename T = void> T set_Online(bool value) {
		return ((T (*)(UserInfoData*, bool))(Il2CppBase() + 0x246C9D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246C9E0))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(UserInfoData*, Il2CppString*))(Il2CppBase() + 0x246C9E8))(this, value);
	}
	template <typename T = int64_t> T get_LastLogin() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246CA68))(this);
	}
	template <typename T = void> T set_LastLogin(int64_t value) {
		return ((T (*)(UserInfoData*, int64_t))(Il2CppBase() + 0x246CA70))(this, value);
	}
	template <typename T = int32_t> T get_CellId() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246CA78))(this);
	}
	template <typename T = void> T set_CellId(int32_t value) {
		return ((T (*)(UserInfoData*, int32_t))(Il2CppBase() + 0x246CA80))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246CA88))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246CAF8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246CBCC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246CCF8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246CD5C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserInfoData*))(Il2CppBase() + 0x246CEF8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246D10C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246D1AC))(this, input);
	}

};

}
