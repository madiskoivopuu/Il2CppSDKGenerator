#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackOutcome
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackOutcome"));
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
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& data_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E742C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E7490))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E75B0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E7704))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E7760))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(PackOutcome*, int64_t))(Il2CppBase() + 0x11E7768))(this, value);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E7770))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7778))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E77F8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7868))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E791C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E799C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7A00))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PackOutcome*))(Il2CppBase() + 0x11E7A90))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7B58))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7BB4))(this, input);
	}

};

}
