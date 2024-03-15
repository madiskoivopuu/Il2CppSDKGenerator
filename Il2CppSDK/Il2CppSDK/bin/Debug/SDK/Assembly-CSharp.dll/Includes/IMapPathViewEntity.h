#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapPathViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapPathViewEntity"));
	}


	template <typename R = MapPathViewComponent*> R get_mapPathView() {
		return ((R (*)(IMapPathViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMapPathView() {
		return ((R (*)(IMapPathViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<float>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((R (*)(IMapPathViewEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<float>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename R = void> R ReplaceMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<float>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((R (*)(IMapPathViewEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<float>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename R = void> R RemoveMapPathView() {
		return ((R (*)(IMapPathViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

