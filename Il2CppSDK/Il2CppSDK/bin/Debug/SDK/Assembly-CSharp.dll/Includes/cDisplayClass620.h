#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass620
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass62_0"));
	}

	template <typename R = DropdownItem*> R& item() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = UnityEngineUI::ExtendedDropdown*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Showb__0(bool x) {
		return ((R (*)(cDisplayClass620*, bool))(Il2CppBase() + 0xE9D9E0))(this, x);
	}

};

