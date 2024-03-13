#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IconComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IconComponentHelper"));
	}


	template <typename T = Icon*> static T GetIconOrDefault(IIconEntity* iconEntity, Il2CppString* defaultIcon) {
		return ((T (*)(void *, IIconEntity*, Il2CppString*))(Il2CppBase() + 0x1E3CF44))(0, iconEntity, defaultIcon);
	}

};

