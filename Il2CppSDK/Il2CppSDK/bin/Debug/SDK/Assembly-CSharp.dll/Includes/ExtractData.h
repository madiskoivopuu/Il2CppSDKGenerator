#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractData"));
	}

	template <typename R = RequestType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& FromSlotId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ToSlotId() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& StealResourceCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExtractData*, uintptr_t))(Il2CppBase() + 0x168ACA0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExtractData*, uintptr_t))(Il2CppBase() + 0x168AD24))(this, reader);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ExtractData*))(Il2CppBase() + 0x168AEB8))(this);
	}

};

