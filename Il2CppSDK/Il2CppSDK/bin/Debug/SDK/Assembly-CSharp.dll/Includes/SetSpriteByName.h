#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetSpriteByName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetSpriteByName"));
	}

	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _spriteName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(SetSpriteByName*))(Il2CppBase() + 0x1625BD0))(this);
	}

};

}
