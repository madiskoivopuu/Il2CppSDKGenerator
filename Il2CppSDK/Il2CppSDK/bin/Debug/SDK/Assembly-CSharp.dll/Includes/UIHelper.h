#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHelper"));
	}

	template <typename T = Il2CppString*> static T& _cooldownKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _defaultDurabilityKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _insertSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _colorTagLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _colorStartTagKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _colorEndTagKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _truncatingSuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<TripleString*, Il2CppString*>*> static T& _namesCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _languageCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T ToUserTag(int64_t userId) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x1030290))(0, userId);
	}
	template <typename T = int64_t> static T FromUserTag(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x103048C))(0, tag);
	}
	template <typename T = Il2CppString*> static T BWFReplace(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1030624))(0, text);
	}
	template <typename T = int32_t> static T GetUnlearnedBlueprintsCount(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0x1030AB4))(0, account);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForItem(GameEntity* avatar, Il2CppString* name) {
		return ((T (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1030B20))(0, avatar, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForInventoryItem(GameEntity* avatar, ItemEntity* itemEntity, InventorySlotEntity* inventoryEntity) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1031794))(0, avatar, itemEntity, inventoryEntity);
	}
	template <typename T = void> static T AddDamageDescription(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions) {
		return ((T (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1031814))(0, entity, descriptions);
	}
	template <typename T = void> static T AddAttackPerSecondDescription(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((T (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1031AC8))(0, entity, descriptions, prefix);
	}
	template <typename T = void> static T AddRarityDescription(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((T (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1031E40))(0, entity, descriptions, prefix);
	}
	template <typename T = void> static T AddMagicDescription(GameEntity* avatar, Il2CppString* magicName, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix, Il2CppString* color) {
		return ((T (*)(void *, GameEntity*, Il2CppString*, Il2CppList<Il2CppString*>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10320F4))(0, avatar, magicName, descriptions, prefix, color);
	}
	template <typename T = ValueTuple2Il2CppString*, Il2CppArray<uintptr_t>*>*> static T GetEquipSetTooltip(GameEntity* avatar, Il2CppString* equipSetName) {
		return ((T (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1037CC0))(0, avatar, equipSetName);
	}
	template <typename T = void> static T AddMagicDescriptions(GameEntity* avatar, Il2CppArray<uintptr_t>* magicNames, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((T (*)(void *, GameEntity*, Il2CppArray<uintptr_t>*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1038AC4))(0, avatar, magicNames, descriptions, prefix);
	}
	template <typename T = Il2CppString*> static T GetMagicDescriptions(GameEntity* avatar, Il2CppArray<uintptr_t>* magicNames) {
		return ((T (*)(void *, GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1038BBC))(0, avatar, magicNames);
	}
	template <typename T = void> static T AddActionDescription(GameEntity* avatar, Il2CppString* actionName, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((T (*)(void *, GameEntity*, Il2CppString*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1038EBC))(0, avatar, actionName, descriptions, prefix);
	}
	template <typename T = Il2CppString*> static T GetFormatString(Il2CppString* prefix, Il2CppString* color) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10378A4))(0, prefix, color);
	}
	template <typename T = void> static T AddTooltipParams(IToolTipEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix, Il2CppString* color) {
		return ((T (*)(void *, IToolTipEntity*, Il2CppList<Il2CppString*>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10374C8))(0, entity, descriptions, prefix, color);
	}
	template <typename T = void> static T AddRuneParameters(ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions) {
		return ((T (*)(void *, ItemEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x103AAD4))(0, entity, descriptions);
	}
	template <typename T = void> static T AddParamsDescription(GameEntity* avatar, ItemEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1039C34))(0, avatar, entity, descriptions, prefix);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForItemWithWarning(GameEntity* avatar, ItemEntity* entity, Il2CppString* warning) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x103B0E8))(0, avatar, entity, warning);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForGhostyRune(ItemEntity* itemEntity, int64_t endTime) {
		return ((T (*)(void *, ItemEntity*, int64_t))(Il2CppBase() + 0x103B304))(0, itemEntity, endTime);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForItem_1(GameEntity* avatar, ItemEntity* itemEntity, InventorySlotEntity* inventoryEntity) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1030CA0))(0, avatar, itemEntity, inventoryEntity);
	}
	template <typename T = void> static T AddDurabilityDescriptions(GameEntity* avatar, InventorySlotEntity* slotEntity, ItemEntity* itemEntity, Il2CppList<Il2CppString*>* descriptions) {
		return ((T (*)(void *, GameEntity*, InventorySlotEntity*, ItemEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x103BD44))(0, avatar, slotEntity, itemEntity, descriptions);
	}
	template <typename T = ValueTuple2Il2CppString*, Il2CppString*>*> static T GetPreviewForItemOrNull(GameEntity* avatar, ItemEntity* itemEntity) {
		return ((T (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x103C6F8))(0, avatar, itemEntity);
	}
	template <typename T = Il2CppString*> static T GetParamsDescription(GameEntity* avatar, ItemEntity* entity, Il2CppString* separator) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x103C7FC))(0, avatar, entity, separator);
	}
	template <typename T = Il2CppString*> static T GetUniqueParamsDescription(GameEntity* avatar, ItemEntity* entity, ItemEntity* targetEntity, Il2CppString* separator) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x103C900))(0, avatar, entity, targetEntity, separator);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForItem_2(Store2DataEntity* entity) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x103CB70))(0, entity);
	}
	template <typename T = Il2CppString*> static T TruncateColorizedString(Il2CppString* fullString, int32_t maxLength, bool extendIfNeed) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x103CD30))(0, fullString, maxLength, extendIfNeed);
	}
	template <typename T = bool> static T IgnoreParamsDescription(IToolTipEntity* entity) {
		return ((T (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x1036E5C))(0, entity);
	}
	template <typename T = bool> static T IgnoreRarity(IToolTipEntity* entity) {
		return ((T (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x103BC10))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetPrefix(IToolTipEntity* entity) {
		return ((T (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x103726C))(0, entity);
	}
	template <typename T = void> static T AddHeader(IToolTipEntity* entity, Il2CppList<Il2CppString*>* descriptions, Il2CppString* prefix) {
		return ((T (*)(void *, IToolTipEntity*, Il2CppList<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1036F90))(0, entity, descriptions, prefix);
	}
	template <typename T = bool> static T IgnoreDurationDescription(IToolTipEntity* entity) {
		return ((T (*)(void *, IToolTipEntity*))(Il2CppBase() + 0x1037AC0))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetLocalDateTimeStringFromUTCTicks(int64_t timeTicks) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x103CED0))(0, timeTicks);
	}
	template <typename T = Il2CppString*> static T GetServerDateTimeStringFromTicks(int64_t timeTicks) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x103CFB8))(0, timeTicks);
	}
	template <typename T = Il2CppString*> static T GetServerDateTimeStringFromTicks_1(uintptr_t dt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x103D090))(0, dt);
	}
	template <typename T = uintptr_t> static T GetLocalDateTimeFromUTCTicks(int64_t timeTicks) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x103D11C))(0, timeTicks);
	}
	template <typename T = Time*> static T GetFormattedTimerFromTicks(int64_t timeTicks, bool showDays) {
		return ((T (*)(void *, int64_t, bool))(Il2CppBase() + 0x102EC68))(0, timeTicks, showDays);
	}
	template <typename T = Time*> static T GetFormattedTimerFromSeconds(double timeSeconds, bool showSeconds, bool showMinutes, bool showHours, bool showDays) {
		return ((T (*)(void *, double, bool, bool, bool, bool))(Il2CppBase() + 0x103D1A0))(0, timeSeconds, showSeconds, showMinutes, showHours, showDays);
	}
	template <typename T = Time*> static T GetFormattedShortTimerFromSeconds(double timeSeconds) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x103D454))(0, timeSeconds);
	}
	template <typename T = Time*> static T GetFormattedShortTimerFromTicks(int64_t timeTicks) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x103D6D0))(0, timeTicks);
	}
	template <typename T = Time*> static T GetFormattedDuration(float seconds) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1037BF4))(0, seconds);
	}
	template <typename T = Time*> static T GetFormattedCooldownLeft(float seconds) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x103DB5C))(0, seconds);
	}
	template <typename T = Time*> static T GetFormattedDuration_1(uintptr_t timeSpan) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x103D900))(0, timeSpan);
	}
	template <typename T = bool> static T WasGPGSPreviouslyDismissed() {
		return ((T (*)(void *))(Il2CppBase() + 0x103DC54))(0);
	}
	template <typename T = bool> static T WasGamecenterPreviouslyDismissed() {
		return ((T (*)(void *))(Il2CppBase() + 0x103DCAC))(0);
	}
	template <typename T = Il2CppString*> static T ProgressToString(QuestDataEntity* questData, Il2CppString* formatStr, int32_t progress) {
		return ((T (*)(void *, QuestDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x103DD04))(0, questData, formatStr, progress);
	}
	template <typename T = Il2CppString*> static T GetCaption(QuestDataEntity* questData) {
		return ((T (*)(void *, QuestDataEntity*))(Il2CppBase() + 0x103DF0C))(0, questData);
	}
	template <typename T = void> static T SetLocalizedCaption(uintptr_t text, QuestDataEntity* questData) {
		return ((T (*)(void *, uintptr_t, QuestDataEntity*))(Il2CppBase() + 0x103E414))(0, text, questData);
	}
	template <typename T = Il2CppString*> static T GetDescriptionText(QuestDataEntity* questData) {
		return ((T (*)(void *, QuestDataEntity*))(Il2CppBase() + 0x103E720))(0, questData);
	}
	template <typename T = Il2CppString*> static T GetLocalizedRegionName(Il2CppString* region) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x103EC28))(0, region);
	}
	template <typename T = float> static T Median(IEnumerable1float>* source) {
		return ((T (*)(void *, IEnumerable1float>*))(Il2CppBase() + 0x103F6A0))(0, source);
	}
	template <typename T = double> static T Median_1(IEnumerable1int64_t>* source) {
		return ((T (*)(void *, IEnumerable1int64_t>*))(Il2CppBase() + 0x103F8A4))(0, source);
	}
	template <typename T = void> static T OnShowContactUs() {
		return ((T (*)(void *))(Il2CppBase() + 0x103FAB0))(0);
	}
	template <typename T = void> static T CopyToClipboard(Il2CppString* toCopyString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x103FEA0))(0, toCopyString);
	}
	template <typename T = Il2CppString*> static T GetSettingsDiscordUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x103FF24))(0);
	}
	template <typename T = Il2CppString*> static T GetRateUsDiscordUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x103FFC0))(0);
	}
	template <typename T = int32_t> static T GetListenerNumber(uintptr_t unityEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1040004))(0, unityEvent);
	}
	template <typename T = Il2CppString*> static T GetMountGradeText(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1040150))(0, item);
	}
	template <typename T = Il2CppString*> static T GetMountGradeText_1(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1040288))(0, grade);
	}
	template <typename T = Il2CppString*> static T GetPetGradeText(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1040318))(0, item);
	}
	template <typename T = Il2CppString*> static T GetPetGradeText_1(int32_t grade) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1040450))(0, grade);
	}
	template <typename T = Il2CppString*> static T GetMountTypeLocalizedText(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x10404E0))(0, item);
	}
	template <typename T = Il2CppString*> static T GetMountTypeWithGradeLocalizedText(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1040680))(0, item);
	}
	template <typename T = void> static T ShowTooltipForItem(TooltipView* tooltipView, IInventoryItem* inventoryItem) {
		return ((T (*)(void *, TooltipView*, IInventoryItem*))(Il2CppBase() + 0x1040714))(0, tooltipView, inventoryItem);
	}
	template <typename T = void> static T ShowTooltipForItem_1(TooltipView* tooltipView, ItemEntity* item, Il2CppString* warning) {
		return ((T (*)(void *, TooltipView*, ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1040884))(0, tooltipView, item, warning);
	}
	template <typename T = Il2CppString*> static T GetLocalizationKey(GuildRole* role) {
		return ((T (*)(void *, GuildRole*))(Il2CppBase() + 0x1040900))(0, role);
	}
	template <typename T = Il2CppString*> static T GetLocalizedName(GameEntity* entity, bool withGuildTag) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x10409B8))(0, entity, withGuildTag);
	}
	template <typename T = Il2CppString*> static T GetLocalizedPlayerName(GameEntity* entity, bool withGuildTag) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x1040EB4))(0, entity, withGuildTag);
	}
	template <typename T = Il2CppString*> static T GetLocalizedPlayerName_1(uintptr_t entity, bool withTag) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, entity, withTag);
	}
	template <typename T = void> static T UpdateCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x1040FD0))(0);
	}
	template <typename T = Il2CppString*> static T GetNameFormatFromBlueprint(Il2CppString* blueprintName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x104117C))(0, blueprintName);
	}
	template <typename T = Il2CppString*> static T GetLocalizedName_1(Il2CppString* name, Il2CppString* guildTag, Il2CppString* format) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1040B1C))(0, name, guildTag, format);
	}
	template <typename T = uintptr_t> static T GetSnapToPositionToBringChildIntoView(uintptr_t instance, uintptr_t child) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x10412F4))(0, instance, child);
	}
	template <typename T = uintptr_t> static T GetDurabilityProgressColor(float durabilityCoef, ItemEntity* item) {
		return ((T (*)(void *, float, ItemEntity*))(Il2CppBase() + 0x1041368))(0, durabilityCoef, item);
	}
	template <typename T = void> static T SetItemRarityView(ItemEntity* item, Il2CppArray<uintptr_t>* rarityViews) {
		return ((T (*)(void *, ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1041470))(0, item, rarityViews);
	}
	template <typename T = uintptr_t> static T GetRarityColor(Rarity* rarity) {
		return ((T (*)(void *, Rarity*))(Il2CppBase() + 0x1041530))(0, rarity);
	}
	template <typename T = uintptr_t> static T GetItemRarityColor(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041704))(0, item);
	}
	template <typename T = uintptr_t> static T GetItemRarityTextColor(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041798))(0, item);
	}
	template <typename T = uintptr_t> static T GetClassRarityColor(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041994))(0, item);
	}
	template <typename T = uintptr_t> static T GetClassNameRarityColor(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041B80))(0, item);
	}
	template <typename T = Icon*> static T GetClassPreviewIcon(ItemEntity* item) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1041D74))(0, item);
	}
	template <typename T = Il2CppString*> static T GetClassRoleIconName(Il2CppString* role) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1041E30))(0, role);
	}

};

