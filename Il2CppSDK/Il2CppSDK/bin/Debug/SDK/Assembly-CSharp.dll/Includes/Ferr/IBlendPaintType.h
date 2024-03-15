#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IBlendPaintType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IBlendPaintType"));
	}


	template <typename R = uintptr_t> R get_Color() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Color(uintptr_t value) {
		return ((R (*)(IBlendPaintType*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = float> R get_Size() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Size(float value) {
		return ((R (*)(IBlendPaintType*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = float> R get_Strength() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Strength(float value) {
		return ((R (*)(IBlendPaintType*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = float> R get_Falloff() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Falloff(float value) {
		return ((R (*)(IBlendPaintType*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_Backfaces() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Backfaces(bool value) {
		return ((R (*)(IBlendPaintType*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = uintptr_t> R get_Cursor() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_CursorHotspot() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_ShowColorSettings() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_ShowBrushSettings() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R PaintObjectsBegin(Il2CppList<uintptr_t>* aObjects, uintptr_t aHit, Nullable1uintptr_t>* aPreviousHit) {
		return ((R (*)(IBlendPaintType*, Il2CppList<uintptr_t>*, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects, aHit, aPreviousHit);
	}
	template <typename R = void> R PaintObjects(Il2CppList<uintptr_t>* aObjects, uintptr_t aHit, Nullable1uintptr_t>* aPreviousHit) {
		return ((R (*)(IBlendPaintType*, Il2CppList<uintptr_t>*, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects, aHit, aPreviousHit);
	}
	template <typename R = void> R PaintObjectsEnd(Il2CppList<uintptr_t>* aObjects, uintptr_t aHit, Nullable1uintptr_t>* aPreviousHit) {
		return ((R (*)(IBlendPaintType*, Il2CppList<uintptr_t>*, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects, aHit, aPreviousHit);
	}
	template <typename R = void> R PaintBegin(uintptr_t aObject, uintptr_t aHit, Nullable1uintptr_t>* aPreviousHit) {
		return ((R (*)(IBlendPaintType*, uintptr_t, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(this, aObject, aHit, aPreviousHit);
	}
	template <typename R = void> R Paint(uintptr_t aObject, uintptr_t aHit, Nullable1uintptr_t>* aPreviousHit) {
		return ((R (*)(IBlendPaintType*, uintptr_t, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(this, aObject, aHit, aPreviousHit);
	}
	template <typename R = void> R PaintEnd(uintptr_t aObject, uintptr_t aHit, Nullable1uintptr_t>* aPreviousHit) {
		return ((R (*)(IBlendPaintType*, uintptr_t, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(this, aObject, aHit, aPreviousHit);
	}
	template <typename R = float> R GetPointInfluence(uintptr_t aObjScale, uintptr_t aHitPt, uintptr_t aHitDirection, uintptr_t aVert, uintptr_t aVertNormal) {
		return ((R (*)(IBlendPaintType*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, aObjScale, aHitPt, aHitDirection, aVert, aVertNormal);
	}
	template <typename R = void> R RenderScenePreview(uintptr_t aSceneCamera, uintptr_t aHit, Il2CppList<uintptr_t>* aObjects) {
		return ((R (*)(IBlendPaintType*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, aSceneCamera, aHit, aObjects);
	}
	template <typename R = void> R RenderScenePreview_1(uintptr_t aSceneCamera, uintptr_t aHit, uintptr_t aObject) {
		return ((R (*)(IBlendPaintType*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, aSceneCamera, aHit, aObject);
	}
	template <typename R = int32_t> R CheckPriority(uintptr_t aOfObject) {
		return ((R (*)(IBlendPaintType*, uintptr_t))(Il2CppBase() + 0x0))(this, aOfObject);
	}
	template <typename R = void> R OnSelect(Il2CppList<uintptr_t>* aObjects) {
		return ((R (*)(IBlendPaintType*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects);
	}
	template <typename R = void> R OnUnselect(Il2CppList<uintptr_t>* aObjects) {
		return ((R (*)(IBlendPaintType*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects);
	}
	template <typename R = void> R DrawToolGUI() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R GUIInput() {
		return ((R (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}

};

}
