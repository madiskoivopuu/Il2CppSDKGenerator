#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDoorsAndWalls
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDoorsAndWalls"));
	}


	template <typename T = DoorsAndWalls*> T get_DoorsAndWalls() {
		return ((T (*)(IDoorsAndWalls*))(Il2CppBase() + 0x0))(this);
	}

};

