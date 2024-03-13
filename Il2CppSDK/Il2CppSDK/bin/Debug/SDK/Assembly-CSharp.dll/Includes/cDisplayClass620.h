#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass620
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass62_0"));
	}

	template <typename T = DropdownItem*> T& item() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ExtendedDropdown*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Showb__0(bool x) {
		return ((T (*)(cDisplayClass620*, bool))(Il2CppBase() + 0xE9D9E0))(this, x);
	}

};

