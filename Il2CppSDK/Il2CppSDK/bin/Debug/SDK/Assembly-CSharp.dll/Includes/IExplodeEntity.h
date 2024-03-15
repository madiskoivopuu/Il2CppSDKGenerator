#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExplodeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExplodeEntity"));
	}


	template <typename R = ExplodeComponent*> R get_explode() {
		return ((R (*)(IExplodeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasExplode() {
		return ((R (*)(IExplodeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddExplode(Il2CppString* newItem, ExplodeType newType) {
		return ((R (*)(IExplodeEntity*, Il2CppString*, ExplodeType))(Il2CppBase() + 0x0))(this, newItem, newType);
	}
	template <typename R = void> R ReplaceExplode(Il2CppString* newItem, ExplodeType newType) {
		return ((R (*)(IExplodeEntity*, Il2CppString*, ExplodeType))(Il2CppBase() + 0x0))(this, newItem, newType);
	}
	template <typename R = void> R RemoveExplode() {
		return ((R (*)(IExplodeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

