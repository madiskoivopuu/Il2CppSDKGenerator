#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadFillData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadFillData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Owners() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(QuadFillData*, uintptr_t))(Il2CppBase() + 0x11C5B8C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(QuadFillData*, uintptr_t))(Il2CppBase() + 0x11C5BD0))(this, reader);
	}

};

