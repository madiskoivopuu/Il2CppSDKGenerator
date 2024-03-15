#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmunityCacheComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmunityCacheComponent"));
	}

	 HashSet1<Il2CppString*>*& Tags() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	 HashSet1<Il2CppString*>*& Names() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = ModifierGroup> R GetGroup() {
		return ((R (*)(ImmunityCacheComponent*))(Il2CppBase() + 0x1E3DCB8))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(ImmunityCacheComponent*))(Il2CppBase() + 0x1E3DCC0))(this);
	}

};

