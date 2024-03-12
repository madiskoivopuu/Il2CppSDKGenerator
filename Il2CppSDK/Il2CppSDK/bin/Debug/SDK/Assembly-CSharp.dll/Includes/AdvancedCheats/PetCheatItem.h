#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class PetCheatItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "PetCheatItem"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_Blueprint() {
		return ((T (*)(PetCheatItem*))(Il2CppBase() + 0x11EB424))(this);
	}
	template <typename T = void> T set_Blueprint(Il2CppString* value) {
		return ((T (*)(PetCheatItem*, Il2CppString*))(Il2CppBase() + 0x11EB42C))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t item, void* onClick) {
		return ((T (*)(PetCheatItem*, uintptr_t, void*))(Il2CppBase() + 0x11EB434))(this, item, onClick);
	}

};

}
