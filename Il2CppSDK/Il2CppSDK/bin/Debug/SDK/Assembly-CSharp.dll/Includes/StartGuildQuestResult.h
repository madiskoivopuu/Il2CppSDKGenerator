#pragma once

class StartGuildQuestResult
{

	Error = 0,
	GuildRoleWrong = 1,
	GuildQuestUnavailableInThisDay = 2,
	GuildQuestStartTemporarilyDisabled = 3,
	GuildQuestAlreadyExists = 4,
	GuildQuestompletedToday = 5,
	GuildQuestExceededMaxDayCount = 6,
	Ok = 7

};

