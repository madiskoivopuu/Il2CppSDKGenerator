#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadFillData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadFillData"));
	}

	template <typename R = Il2CppArray<int64_t>*> R& Owners() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(QuadFillData*, uintptr_t))(Il2CppBase() + 0x11C5B8C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(QuadFillData*, uintptr_t))(Il2CppBase() + 0x11C5BD0))(this, reader);
	}

};

