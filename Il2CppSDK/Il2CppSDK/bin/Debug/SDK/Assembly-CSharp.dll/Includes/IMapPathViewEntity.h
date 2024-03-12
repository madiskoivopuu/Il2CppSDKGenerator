#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapPathViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapPathViewEntity"));
	}


	template <typename T = uintptr_t> T get_mapPathView() {
		return ((T (*)(IMapPathViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMapPathView() {
		return ((T (*)(IMapPathViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<uintptr_t>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((T (*)(IMapPathViewEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename T = void> T ReplaceMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<uintptr_t>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((T (*)(IMapPathViewEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename T = void> T RemoveMapPathView() {
		return ((T (*)(IMapPathViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
