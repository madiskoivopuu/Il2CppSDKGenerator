#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ConstructionWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConstructionWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& StableIcon() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& TreeIcon() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& ContainerIcon() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = PrerequisiteContainer*> R& ConstructObject() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& FinalizeButton() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& ConstructedImage() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	 HashSet1Il2CppString*>*& _needResources() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x180);
	}
	template <typename R = bool> R& _sendFinalize() {
		return *(R*)((uintptr_t)this + 0x188);
	}

	 HashSet1Il2CppString*>* GetNeedResources() {
		return ((HashSet1Il2CppString*>* (*)(ConstructionWindow*))(Il2CppBase() + 0x15E980C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ConstructionWindow*))(Il2CppBase() + 0x15E9B08))(this);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(ConstructionWindow*, IInventoryItem*))(Il2CppBase() + 0x15E9F9C))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ConstructionWindow*))(Il2CppBase() + 0x15EA470))(this);
	}
	template <typename R = void> R OnFinalizeClick() {
		return ((R (*)(ConstructionWindow*))(Il2CppBase() + 0x15EA6D8))(this);
	}
	template <typename R = void> R OnFinalizeResult(FinalizeResultData* data) {
		return ((R (*)(ConstructionWindow*, FinalizeResultData*))(Il2CppBase() + 0x15EAD80))(this, data);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ConstructionWindow*, float))(Il2CppBase() + 0x15EAED4))(this, deltaTime);
	}
	template <typename R = bool> R CanFinalize(GameEntity* target) {
		return ((R (*)(ConstructionWindow*, GameEntity*))(Il2CppBase() + 0x15EAB0C))(this, target);
	}

};

