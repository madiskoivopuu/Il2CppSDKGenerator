#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class RuntimeLayerUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "RuntimeLayerUtil"));
	}

	template <typename T = Il2CppList<int32_t>*> static T& mReservedLayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> static T GetFreeLayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1354720))(0);
	}
	template <typename T = void> static T ReserveLayer(int32_t aLayerID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1354874))(0, aLayerID);
	}

};

}
