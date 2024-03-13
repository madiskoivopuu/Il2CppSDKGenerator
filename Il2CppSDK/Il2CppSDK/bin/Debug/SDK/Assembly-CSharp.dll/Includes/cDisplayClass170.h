#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass170
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass17_0"));
	}

	template <typename T = PetsConstructionView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& slotIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action1Il2CppString*>*> T& 9__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T InitSkillsb__0(Il2CppString* s) {
		return ((T (*)(cDisplayClass170*, Il2CppString*))(Il2CppBase() + 0x10AF2E4))(this, s);
	}

};

