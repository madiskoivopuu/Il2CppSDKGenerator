#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClientConfigurationItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClientConfigurationItem"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& VersionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& version_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE1719C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE17200))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE17320))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE16964))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE173B8))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE173C0))(this, value);
	}
	template <typename T = int64_t> T get_Version() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE173C8))(this);
	}
	template <typename T = void> T set_Version(int64_t value) {
		return ((T (*)(ClientConfigurationItem*, int64_t))(Il2CppBase() + 0xE173D0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE173D8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE17474))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE174B4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE17524))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE17588))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClientConfigurationItem*))(Il2CppBase() + 0xE1760C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE16F48))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClientConfigurationItem*, uintptr_t))(Il2CppBase() + 0xE176C0))(this, input);
	}

};

}
