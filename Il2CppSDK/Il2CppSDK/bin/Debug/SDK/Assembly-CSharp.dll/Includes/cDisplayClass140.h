#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass140
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass14_0"));
	}

	template <typename T = ItemEntity*> T& classItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T TryShowClassb__0(ClassTabButton* t) {
		return ((T (*)(cDisplayClass140*, ClassTabButton*))(Il2CppBase() + 0x111C5B8))(this, t);
	}

};

