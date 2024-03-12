#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserRegionRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserRegionRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& VersionStrFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& versionStr_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tag_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2475B7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2475BE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x2475D00))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x2475E2C))(this);
	}
	template <typename T = Il2CppString*> T get_VersionStr() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x2475E88))(this);
	}
	template <typename T = void> T set_VersionStr(Il2CppString* value) {
		return ((T (*)(UserRegionRequest*, Il2CppString*))(Il2CppBase() + 0x2475E90))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x2475F10))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(UserRegionRequest*, Il2CppString*))(Il2CppBase() + 0x2475F18))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x2475F98))(this);
	}
	template <typename T = void> T set_Tag(Il2CppString* value) {
		return ((T (*)(UserRegionRequest*, Il2CppString*))(Il2CppBase() + 0x2475FA0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x2476020))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x2476090))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x247610C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x2476198))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x24761FC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserRegionRequest*))(Il2CppBase() + 0x24762C4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x24763E0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserRegionRequest*, uintptr_t))(Il2CppBase() + 0x2476458))(this, input);
	}

};

}
