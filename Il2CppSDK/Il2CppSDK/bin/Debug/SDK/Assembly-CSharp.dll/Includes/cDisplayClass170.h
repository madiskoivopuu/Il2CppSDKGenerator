#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass170
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass17_0"));
	}

	template <typename R = AdvancedCheats::PetsConstructionView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& slotIndex() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1Il2CppString*>*& 9__0() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R InitSkillsb__0(Il2CppString* s) {
		return ((R (*)(cDisplayClass170*, Il2CppString*))(Il2CppBase() + 0x10AF2E4))(this, s);
	}

};
