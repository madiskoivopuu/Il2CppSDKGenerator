#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmunityCacheComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmunityCacheComponent"));
	}

	template <typename T = HashSet1Il2CppString*>*> T& Tags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = HashSet1Il2CppString*>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = ModifierGroup*> T GetGroup() {
		return ((T (*)(ImmunityCacheComponent*))(Il2CppBase() + 0x1E3DCB8))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(ImmunityCacheComponent*))(Il2CppBase() + 0x1E3DCC0))(this);
	}

};

