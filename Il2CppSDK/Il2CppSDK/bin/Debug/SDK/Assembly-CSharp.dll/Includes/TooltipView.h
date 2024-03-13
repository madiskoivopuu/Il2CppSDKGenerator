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
	template <typename T = TooltipParamView*> T& _paramViewRefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<TooltipParamView*>*> T& _paramsList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _skillsContainer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = TooltipSkillView*> T& _skillViewRefab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<TooltipSkillView*>*> T& _skillsList() {
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
	template <typename T = PuppetRendererController*> T& _puppetRenderer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = GradeUpView*> T& _gradeUpView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = EquipSetView*> T& _equipSetView() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _desiredOffset() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Show(uintptr_t screenPos, Il2CppString* title, Il2CppArray<uintptr_t>* messages) {
		return ((T (*)(TooltipView*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14F24D0))(this, screenPos, title, messages);
	}
	template <typename T = void> T Show_1(uintptr_t screenPos, ItemEntity* item, InventorySlotEntity* inventoryEntity) {
		return ((T (*)(TooltipView*, uintptr_t, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x14F48B8))(this, screenPos, item, inventoryEntity);
	}
	template <typename T = void> T Show_2(uintptr_t screenPos, ItemEntity* item, Il2CppString* warning) {
		return ((T (*)(TooltipView*, uintptr_t, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x14F4E2C))(this, screenPos, item, warning);
	}
	template <typename T = void> T Show_3(uintptr_t screenPos, ItemEntity* item, Il2CppString* title, Il2CppArray<uintptr_t>* messages) {
		return ((T (*)(TooltipView*, uintptr_t, ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14F6DDC))(this, screenPos, item, title, messages);
	}
	template <typename T = bool> T OpenItemRequireSpecialTooltip(ItemEntity* item, Il2CppString* warning) {
		return ((T (*)(TooltipView*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x14F6C64))(this, item, warning);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TooltipView*))(Il2CppBase() + 0x14F93B0))(this);
	}
	template <typename T = void> T ShowPlayerStats(uintptr_t screenPos) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F53C8))(this, screenPos);
	}
	template <typename T = void> T ShowMountStats(uintptr_t screenPos) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F586C))(this, screenPos);
	}
	template <typename T = void> T ShowPetStats(uintptr_t screenPos) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F5C68))(this, screenPos);
	}
	template <typename T = uintptr_t> T UpdatePosition(uintptr_t screenPos) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F6BC8))(this, screenPos);
	}
	template <typename T = void> T ShowParam(Il2CppString* icon, Il2CppString* name, Il2CppString* description, int32_t index) {
		return ((T (*)(TooltipView*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x14F9518))(this, icon, name, description, index);
	}
	template <typename T = void> T ShowSkill(ItemEntity* skill, int32_t index) {
		return ((T (*)(TooltipView*, ItemEntity*, int32_t))(Il2CppBase() + 0x14F8EC8))(this, skill, index);
	}
	template <typename T = void> T SetupPuppet(GameEntity* avatar, ItemEntity* item) {
		return ((T (*)(TooltipView*, GameEntity*, ItemEntity*))(Il2CppBase() + 0x14F79D0))(this, avatar, item);
	}
	template <typename T = void> T SetupEquipSet(uintptr_t screenPos, GameEntity* avatar, Il2CppString* setName) {
		return ((T (*)(TooltipView*, uintptr_t, GameEntity*, Il2CppString*))(Il2CppBase() + 0x14F7CEC))(this, screenPos, avatar, setName);
	}
	template <typename T = void> T SetupGradeUp(uintptr_t screenPos, GameEntity* avatar, GradeUpComponent* gradeUpComponent) {
		return ((T (*)(TooltipView*, uintptr_t, GameEntity*, GradeUpComponent*))(Il2CppBase() + 0x14F7F30))(this, screenPos, avatar, gradeUpComponent);
	}
	template <typename T = void> T SetupPreviewImage(ItemEntity* item) {
		return ((T (*)(TooltipView*, ItemEntity*))(Il2CppBase() + 0x14F7770))(this, item);
	}
	template <typename T = void> T SetupPreviewVideo(ItemEntity* item) {
		return ((T (*)(TooltipView*, ItemEntity*))(Il2CppBase() + 0x14F74B4))(this, item);
	}
	template <typename T = uintptr_t> T GetAdjustedPosition(uintptr_t screenPos) {
		return ((T (*)(TooltipView*, uintptr_t))(Il2CppBase() + 0x14F6954))(this, screenPos);
	}

};

