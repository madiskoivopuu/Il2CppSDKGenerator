#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TooltipView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TooltipView"));
	}

	template <typename T = uintptr_t> T& CanvasRectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _title() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _roleRoot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _roleIcons() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _paramsContainer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _paramViewRefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _paramsList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _skillsContainer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _skillViewRefab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skillsList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _previewContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _previewImage() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _previewDescription() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _previewVideoContainer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _previewVideoPlayer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _puppetContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _gradeUpView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _equipSetView() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector2> T& _desiredOffset() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Show(Il2CppVector3 screenPos, Il2CppString* title, Il2CppArray<uintptr_t>* messages) {
		return ((T (*)(TooltipView*, Il2CppVector3, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14F24D0))(this, screenPos, title, messages);
	}
	template <typename T = void> T Show_1(Il2CppVector3 screenPos, uintptr_t item, uintptr_t inventoryEntity) {
		return ((T (*)(TooltipView*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x14F48B8))(this, screenPos, item, inventoryEntity);
	}
	template <typename T = void> T Show_2(Il2CppVector3 screenPos, uintptr_t item, Il2CppString* warning) {
		return ((T (*)(TooltipView*, Il2CppVector3, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14F4E2C))(this, screenPos, item, warning);
	}
	template <typename T = void> T Show_3(Il2CppVector3 screenPos, uintptr_t item, Il2CppString* title, Il2CppArray<uintptr_t>* messages) {
		return ((T (*)(TooltipView*, Il2CppVector3, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14F6DDC))(this, screenPos, item, title, messages);
	}
	template <typename T = bool> T OpenItemRequireSpecialTooltip(uintptr_t item, Il2CppString* warning) {
		return ((T (*)(TooltipView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14F6C64))(this, item, warning);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TooltipView*))(Il2CppBase() + 0x14F93B0))(this);
	}
	template <typename T = void> T ShowPlayerStats(Il2CppVector3 screenPos) {
		return ((T (*)(TooltipView*, Il2CppVector3))(Il2CppBase() + 0x14F53C8))(this, screenPos);
	}
	template <typename T = void> T ShowMountStats(Il2CppVector3 screenPos) {
		return ((T (*)(TooltipView*, Il2CppVector3))(Il2CppBase() + 0x14F586C))(this, screenPos);
	}
	template <typename T = void> T ShowPetStats(Il2CppVector3 screenPos) {
		return ((T (*)(TooltipView*, Il2CppVector3))(Il2CppBase() + 0x14F5C68))(this, screenPos);
	}
	template <typename T = uintptr_t> T UpdatePosition(Il2CppVector3 screenPos) {
		return ((T (*)(TooltipView*, Il2CppVector3))(Il2CppBase() + 0x14F6BC8))(this, screenPos);
	}
	template <typename T = void> T ShowParam(Il2CppString* icon, Il2CppString* name, Il2CppString* description, int32_t index) {
		return ((T (*)(TooltipView*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x14F9518))(this, icon, name, description, index);
	}
	template <typename T = void> T ShowSkill(uintptr_t skill, int32_t index) {
		return ((T (*)(TooltipView*, uintptr_t, int32_t))(Il2CppBase() + 0x14F8EC8))(this, skill, index);
	}
	template <typename T = void> T SetupPuppet(uintptr_t avatar, uintptr_t item) {
		return ((T (*)(TooltipView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x14F79D0))(this, avatar, item);
	}
	template <typename T = void> T SetupEquipSet(Il2CppVector3 screenPos, uintptr_t avatar, Il2CppString* setName) {
		return ((T (*)(TooltipView*, Il2CppVector3, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14F7CEC))(this, screenPos, avatar, setName);
	}
	template <typename T = void> T SetupGradeUp(Il2CppVector3 screenPos, uintptr_t avatar, uintptr_t gradeUpComponent) {
		return ((T (*)(TooltipView*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x14F7F30))(this, screenPos, avatar, gradeUpComponent);
	}
	template <typename T = void> T SetupPreviewImage(uintptr_t item) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F7770))(this, item);
	}
	template <typename T = void> T SetupPreviewVideo(uintptr_t item) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F74B4))(this, item);
	}
	template <typename T = Il2CppVector2> T GetAdjustedPosition(Il2CppVector3 screenPos) {
		return ((T (*)(TooltipView*, Il2CppVector3))(Il2CppBase() + 0x14F6954))(this, screenPos);
	}

};

}
