#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserInfoData"));
	}

	 static MessageParser1ProtoModels::UserInfoData*>*& _parser() {
		return *(MessageParser1ProtoModels::UserInfoData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ClanIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanId_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& OnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& online_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LastLoginFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastLogin_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& CellIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellId_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1ProtoModels::UserInfoData*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserInfoData*>* (*)(void *))(Il2CppBase() + 0x246C5F4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246C658))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C778))(this);
	}
	template <typename R = ProtoModels::UserInfoData*> R Clone() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C8B8))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C914))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(UserInfoData*, int64_t))(Il2CppBase() + 0x246C91C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C924))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(UserInfoData*, Il2CppString*))(Il2CppBase() + 0x246C92C))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C9AC))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(UserInfoData*, int32_t))(Il2CppBase() + 0x246C9B4))(this, value);
	}
	template <typename R = int64_t> R get_ClanId() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C9BC))(this);
	}
	template <typename R = void> R set_ClanId(int64_t value) {
		return ((R (*)(UserInfoData*, int64_t))(Il2CppBase() + 0x246C9C4))(this, value);
	}
	template <typename R = bool> R get_Online() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C9CC))(this);
	}
	template <typename R = void> R set_Online(bool value) {
		return ((R (*)(UserInfoData*, bool))(Il2CppBase() + 0x246C9D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246C9E0))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(UserInfoData*, Il2CppString*))(Il2CppBase() + 0x246C9E8))(this, value);
	}
	template <typename R = int64_t> R get_LastLogin() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246CA68))(this);
	}
	template <typename R = void> R set_LastLogin(int64_t value) {
		return ((R (*)(UserInfoData*, int64_t))(Il2CppBase() + 0x246CA70))(this, value);
	}
	template <typename R = int32_t> R get_CellId() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246CA78))(this);
	}
	template <typename R = void> R set_CellId(int32_t value) {
		return ((R (*)(UserInfoData*, int32_t))(Il2CppBase() + 0x246CA80))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserInfoData*, Il2CppObject*))(Il2CppBase() + 0x246CA88))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserInfoData* other) {
		return ((R (*)(UserInfoData*, ProtoModels::UserInfoData*))(Il2CppBase() + 0x246CAF8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246CBCC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246CCF8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246CD5C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserInfoData*))(Il2CppBase() + 0x246CEF8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserInfoData* other) {
		return ((R (*)(UserInfoData*, ProtoModels::UserInfoData*))(Il2CppBase() + 0x246D10C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserInfoData*, uintptr_t))(Il2CppBase() + 0x246D1AC))(this, input);
	}

};

}
