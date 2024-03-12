#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractData"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& FromSlotId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ToSlotId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& StealResourceCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ExtractData*, uintptr_t))(Il2CppBase() + 0x168ACA0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ExtractData*, uintptr_t))(Il2CppBase() + 0x168AD24))(this, reader);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExtractData*))(Il2CppBase() + 0x168AEB8))(this);
	}

};

}
