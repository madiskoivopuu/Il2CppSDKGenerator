#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SendUpdateRatioRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SendUpdateRatioRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UpdatesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_updates_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& updates_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x136549C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1365500))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x1365620))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x1365784))(this);
	}
	template <typename T = void*> T get_Updates() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x13657E0))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x13657E8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(SendUpdateRatioRequest*, int64_t))(Il2CppBase() + 0x13657F0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SendUpdateRatioRequest*, uintptr_t))(Il2CppBase() + 0x13657F8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SendUpdateRatioRequest*, uintptr_t))(Il2CppBase() + 0x1365868))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x1365900))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x136595C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SendUpdateRatioRequest*, uintptr_t))(Il2CppBase() + 0x13659C0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SendUpdateRatioRequest*))(Il2CppBase() + 0x1365A9C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SendUpdateRatioRequest*, uintptr_t))(Il2CppBase() + 0x1365B88))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SendUpdateRatioRequest*, uintptr_t))(Il2CppBase() + 0x1365C00))(this, input);
	}

};

}
