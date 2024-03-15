#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSpriteByName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetSpriteByName"));
	}

	template <typename R = uintptr_t> R& _image() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& _spriteName() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(SetSpriteByName*))(Il2CppBase() + 0x1625BD0))(this);
	}

};

