#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApiSavedGame {

class ConflictCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApiSavedGame", "ConflictCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t resolver, uintptr_t original, Il2CppArray<uintptr_t>* originalData, uintptr_t unmerged, Il2CppArray<uintptr_t>* unmergedData) {
		return ((T (*)(ConflictCallback*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E7A98))(this, resolver, original, originalData, unmerged, unmergedData);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t resolver, uintptr_t original, Il2CppArray<uintptr_t>* originalData, uintptr_t unmerged, Il2CppArray<uintptr_t>* unmergedData, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ConflictCallback*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x15E7E8C))(this, resolver, original, originalData, unmerged, unmergedData, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ConflictCallback*, uintptr_t))(Il2CppBase() + 0x15E7EC0))(this, result);
	}

};

}
