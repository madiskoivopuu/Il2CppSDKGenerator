#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserRegionRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserRegionRequest"));
	}

	 static MessageParser1<ProtoModels::UserRegionRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserRegionRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& VersionStrFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& versionStr_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& tag_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::UserRegionRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserRegionRequest*>* (*)(void *))(Il2CppBase() + 0x2475B7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2475BE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x2475D00))(this);
	}
	template <typename R = ProtoModels::UserRegionRequest*> R Clone() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x2475E2C))(this);
	}
	template <typename R = Il2CppString*> R get_VersionStr() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x2475E88))(this);
	}
	template <typename R = void> R set_VersionStr(Il2CppString* value) {
		return ((R (*)(UserRegionRequest*, Il2CppString*))(Il2CppBase() + 0x2475E90))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x2475F10))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(UserRegionRequest*, Il2CppString*))(Il2CppBase() + 0x2475F18))(this, value);
	}
	template <typename R = Il2CppString*> R get_Tag() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x2475F98))(this);
	}
	template <typename R = void> R set_Tag(Il2CppString* value) {
		return ((R (*)(UserRegionRequest*, Il2CppString*))(Il2CppBase() + 0x2475FA0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserRegionRequest*, Il2CppObject*))(Il2CppBase() + 0x2476020))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserRegionRequest* other) {
		return ((R (*)(UserRegionRequest*, ProtoModels::UserRegionRequest*))(Il2CppBase() + 0x2476090))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x247610C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x2476198))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x24761FC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserRegionRequest*))(Il2CppBase() + 0x24762C4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserRegionRequest* other) {
		return ((R (*)(UserRegionRequest*, ProtoModels::UserRegionRequest*))(Il2CppBase() + 0x24763E0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x2476458))(this, input);
	}

};

}
