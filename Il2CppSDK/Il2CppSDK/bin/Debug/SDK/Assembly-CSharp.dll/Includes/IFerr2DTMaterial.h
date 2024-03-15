#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFerr2DTMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFerr2DTMaterial"));
	}


	template <typename R = Il2CppString*> R get_name() {
		return ((R (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_fillMaterial() {
		return ((R (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_fillMaterial(uintptr_t value) {
		return ((R (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = uintptr_t> R get_edgeMaterial() {
		return ((R (*)(IFerr2DTMaterial*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_edgeMaterial(uintptr_t value) {
		return ((R (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = Ferr2DTSegmentDescription*> R GetDescriptor(Ferr2DTTerrainDirection aDirection) {
		return ((R (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection))(Il2CppBase() + 0x0))(this, aDirection);
	}
	template <typename R = bool> R Has(Ferr2DTTerrainDirection aDirection) {
		return ((R (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection))(Il2CppBase() + 0x0))(this, aDirection);
	}
	template <typename R = void> R Set(Ferr2DTTerrainDirection aDirection, bool aActive) {
		return ((R (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection, bool))(Il2CppBase() + 0x0))(this, aDirection, aActive);
	}
	template <typename R = uintptr_t> R GetBody(Ferr2DTTerrainDirection aDirection, int32_t aBodyID) {
		return ((R (*)(IFerr2DTMaterial*, Ferr2DTTerrainDirection, int32_t))(Il2CppBase() + 0x0))(this, aDirection, aBodyID);
	}
	template <typename R = uintptr_t> R ToUV(uintptr_t aNativeRect) {
		return ((R (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aNativeRect);
	}
	template <typename R = uintptr_t> R ToScreen(uintptr_t aNativeRect) {
		return ((R (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aNativeRect);
	}
	template <typename R = uintptr_t> R ToNative(uintptr_t aPixelRect) {
		return ((R (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aPixelRect);
	}
	template <typename R = uintptr_t> R ToPixels(uintptr_t aNativeRect) {
		return ((R (*)(IFerr2DTMaterial*, uintptr_t))(Il2CppBase() + 0x0))(this, aNativeRect);
	}

};

