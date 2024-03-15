#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class PetCheatItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "PetCheatItem"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = Il2CppString*> R get_Blueprint() {
		return ((R (*)(PetCheatItem*))(Il2CppBase() + 0x11EB424))(this);
	}
	template <typename R = void> R set_Blueprint(Il2CppString* value) {
		return ((R (*)(PetCheatItem*, Il2CppString*))(Il2CppBase() + 0x11EB42C))(this, value);
	}
	template <typename R = void> R Bind(ItemEntity* item, Action1<Il2CppString*>* onClick) {
		return ((R (*)(PetCheatItem*, ItemEntity*, Action1<Il2CppString*>*))(Il2CppBase() + 0x11EB434))(this, item, onClick);
	}

};

}
