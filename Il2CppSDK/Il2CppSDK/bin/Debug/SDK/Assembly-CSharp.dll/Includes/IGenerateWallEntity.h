#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGenerateWallEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGenerateWallEntity"));
	}


	template <typename R = GenerateWallComponent*> R get_generateWall() {
		return ((R (*)(IGenerateWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGenerateWall() {
		return ((R (*)(IGenerateWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGenerateWall(Il2CppString* newName) {
		return ((R (*)(IGenerateWallEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceGenerateWall(Il2CppString* newName) {
		return ((R (*)(IGenerateWallEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveGenerateWall() {
		return ((R (*)(IGenerateWallEntity*))(Il2CppBase() + 0x0))(this);
	}

};

