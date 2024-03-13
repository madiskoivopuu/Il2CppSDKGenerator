#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGenerateWallEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGenerateWallEntity"));
	}


	template <typename T = GenerateWallComponent*> T get_generateWall() {
		return ((T (*)(IGenerateWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGenerateWall() {
		return ((T (*)(IGenerateWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGenerateWall(Il2CppString* newName) {
		return ((T (*)(IGenerateWallEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceGenerateWall(Il2CppString* newName) {
		return ((T (*)(IGenerateWallEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveGenerateWall() {
		return ((T (*)(IGenerateWallEntity*))(Il2CppBase() + 0x0))(this);
	}

};

