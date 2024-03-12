#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IBlendPaintType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IBlendPaintType"));
	}


	template <typename T = uintptr_t> T get_Color() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Color(uintptr_t value) {
		return ((T (*)(IBlendPaintType*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_Size() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Size(float value) {
		return ((T (*)(IBlendPaintType*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_Strength() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Strength(float value) {
		return ((T (*)(IBlendPaintType*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_Falloff() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Falloff(float value) {
		return ((T (*)(IBlendPaintType*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_Backfaces() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Backfaces(bool value) {
		return ((T (*)(IBlendPaintType*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_Cursor() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector2> T get_CursorHotspot() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_ShowColorSettings() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_ShowBrushSettings() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PaintObjectsBegin(Il2CppList<uintptr_t>* aObjects, uintptr_t aHit, void* aPreviousHit) {
		return ((T (*)(IBlendPaintType*, Il2CppList<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, aObjects, aHit, aPreviousHit);
	}
	template <typename T = void> T PaintObjects(Il2CppList<uintptr_t>* aObjects, uintptr_t aHit, void* aPreviousHit) {
		return ((T (*)(IBlendPaintType*, Il2CppList<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, aObjects, aHit, aPreviousHit);
	}
	template <typename T = void> T PaintObjectsEnd(Il2CppList<uintptr_t>* aObjects, uintptr_t aHit, void* aPreviousHit) {
		return ((T (*)(IBlendPaintType*, Il2CppList<uintptr_t>*, uintptr_t, void*))(Il2CppBase() + 0x0))(this, aObjects, aHit, aPreviousHit);
	}
	template <typename T = void> T PaintBegin(uintptr_t aObject, uintptr_t aHit, void* aPreviousHit) {
		return ((T (*)(IBlendPaintType*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x0))(this, aObject, aHit, aPreviousHit);
	}
	template <typename T = void> T Paint(uintptr_t aObject, uintptr_t aHit, void* aPreviousHit) {
		return ((T (*)(IBlendPaintType*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x0))(this, aObject, aHit, aPreviousHit);
	}
	template <typename T = void> T PaintEnd(uintptr_t aObject, uintptr_t aHit, void* aPreviousHit) {
		return ((T (*)(IBlendPaintType*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x0))(this, aObject, aHit, aPreviousHit);
	}
	template <typename T = float> T GetPointInfluence(Il2CppVector3 aObjScale, Il2CppVector3 aHitPt, Il2CppVector3 aHitDirection, Il2CppVector3 aVert, Il2CppVector3 aVertNormal) {
		return ((T (*)(IBlendPaintType*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x0))(this, aObjScale, aHitPt, aHitDirection, aVert, aVertNormal);
	}
	template <typename T = void> T RenderScenePreview(uintptr_t aSceneCamera, uintptr_t aHit, Il2CppList<uintptr_t>* aObjects) {
		return ((T (*)(IBlendPaintType*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, aSceneCamera, aHit, aObjects);
	}
	template <typename T = void> T RenderScenePreview_1(uintptr_t aSceneCamera, uintptr_t aHit, uintptr_t aObject) {
		return ((T (*)(IBlendPaintType*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, aSceneCamera, aHit, aObject);
	}
	template <typename T = int32_t> T CheckPriority(uintptr_t aOfObject) {
		return ((T (*)(IBlendPaintType*, uintptr_t))(Il2CppBase() + 0x0))(this, aOfObject);
	}
	template <typename T = void> T OnSelect(Il2CppList<uintptr_t>* aObjects) {
		return ((T (*)(IBlendPaintType*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects);
	}
	template <typename T = void> T OnUnselect(Il2CppList<uintptr_t>* aObjects) {
		return ((T (*)(IBlendPaintType*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, aObjects);
	}
	template <typename T = void> T DrawToolGUI() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T GUIInput() {
		return ((T (*)(IBlendPaintType*))(Il2CppBase() + 0x0))(this);
	}

};

}
