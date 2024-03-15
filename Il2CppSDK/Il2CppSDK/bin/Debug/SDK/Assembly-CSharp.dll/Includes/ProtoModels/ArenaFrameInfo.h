#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaFrameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaFrameInfo"));
	}

	 static MessageParser1ProtoModels::ArenaFrameInfo*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaFrameInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TicFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& tic_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& len_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaFrameInfo*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaFrameInfo*>* (*)(void *))(Il2CppBase() + 0x1E20204))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E20268))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20388))(this);
	}
	template <typename R = ProtoModels::ArenaFrameInfo*> R Clone() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20428))(this);
	}
	template <typename R = int64_t> R get_Tic() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20484))(this);
	}
	template <typename R = void> R set_Tic(int64_t value) {
		return ((R (*)(ArenaFrameInfo*, int64_t))(Il2CppBase() + 0x1E2048C))(this, value);
	}
	template <typename R = int64_t> R get_Len() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20494))(this);
	}
	template <typename R = void> R set_Len(int64_t value) {
		return ((R (*)(ArenaFrameInfo*, int64_t))(Il2CppBase() + 0x1E2049C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaFrameInfo*, Il2CppObject*))(Il2CppBase() + 0x1E204A4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaFrameInfo* other) {
		return ((R (*)(ArenaFrameInfo*, ProtoModels::ArenaFrameInfo*))(Il2CppBase() + 0x1E20540))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E20580))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E205EC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E20650))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaFrameInfo*))(Il2CppBase() + 0x1E206D4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaFrameInfo* other) {
		return ((R (*)(ArenaFrameInfo*, ProtoModels::ArenaFrameInfo*))(Il2CppBase() + 0x1E20788))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaFrameInfo*, uintptr_t))(Il2CppBase() + 0x1E207A8))(this, input);
	}

};

}
