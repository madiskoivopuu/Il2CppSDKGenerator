#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaFrameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaFrameInfo"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TicFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& tic_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& len_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E20204))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E20268))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20388))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20428))(this);
	}
	template <typename T = int64_t> T get_Tic() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20484))(this);
	}
	template <typename T = void> T set_Tic(int64_t value) {
		return ((T (*)(ArenaFrameInfo*, int64_t))(Il2CppBase() + 0x1E2048C))(this, value);
	}
	template <typename T = int64_t> T get_Len() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20494))(this);
	}
	template <typename T = void> T set_Len(int64_t value) {
		return ((T (*)(ArenaFrameInfo*, int64_t))(Il2CppBase() + 0x1E2049C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E204A4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E20540))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20580))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E205EC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E20650))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E206D4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E20788))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E207A8))(this, input);
	}

};

}
