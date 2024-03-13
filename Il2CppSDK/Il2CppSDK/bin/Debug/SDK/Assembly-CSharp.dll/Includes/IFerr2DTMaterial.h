#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFerr2DTMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFerr2DTMaterial"));
	}


	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_fillMaterial() {
		return ((T (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_fillMaterial(uintptr_t value) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_edgeMaterial() {
		return ((T (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_edgeMaterial(uintptr_t value) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Ferr2DTSegmentDescription*> T GetDescriptor(Ferr2DTTerrainDirection* aDirection) {
		return ((T (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection*))(Il2CppBase() + 0x0))(this, aDirection);
	}
	template <typename T = bool> T Has(Ferr2DTTerrainDirection* aDirection) {
		return ((T (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection*))(Il2CppBase() + 0x0))(this, aDirection);
	}
	template <typename T = void> T Set(Ferr2DTTerrainDirection* aDirection, bool aActive) {
		return ((T (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection*, bool))(Il2CppBase() + 0x0))(this, aDirection, aActive);
	}
	template <typename T = uintptr_t> T GetBody(Ferr2DTTerrainDirection* aDirection, int32_t aBodyID) {
		return ((T (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection*, int32_t))(Il2CppBase() + 0x0))(this, aDirection, aBodyID);
	}
	template <typename T = uintptr_t> T ToUV(uintptr_t aNativeRect) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aNativeRect);
	}
	template <typename T = uintptr_t> T ToScreen(uintptr_t aNativeRect) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aNativeRect);
	}
	template <typename T = uintptr_t> T ToNative(uintptr_t aPixelRect) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aPixelRect);
	}
	template <typename T = uintptr_t> T ToPixels(uintptr_t aNativeRect) {
		return ((T (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aNativeRect);
	}

};

